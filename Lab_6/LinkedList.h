#pragma once
#include <iostream>

template <typename dataType>
struct Node {
	dataType data;
	Node<dataType>* next;
	Node(dataType d) : data(d), next(NULL) { }
};

template <typename dataType>
class LinkedList {
	Node<dataType>* head, * tail;
	int _size;
public:
	class Iterator {
		Node<dataType>* iptr;
	public:
		Iterator(Node<dataType>* p) : iptr(p) { }
		dataType& operator*() { return iptr->data; }
		Iterator& operator++(int) { 
			Node<dataType>* tmp = iptr;
			iptr = iptr->next; 
			return *tmp;
		}
		Iterator& operator++() { iptr = iptr->next; return *this; }
		bool operator!=(Iterator& it) { return iptr != it.iptr; }
	};
	LinkedList() : head(NULL), tail(NULL), _size(0) { }
	int size() { return _size; }
	Iterator begin() { return Iterator(head); }
	Iterator end() { return Iterator(NULL); }
	bool find(dataType);
	void insert(int, dataType);
	dataType operator [] (int);
};

template <typename dataType>
bool LinkedList<dataType>::find(dataType d) {
	Node<dataType>* cur=head;
	while (cur && cur->data != d)
		cur = cur->next;
	return (cur) ? cur->data == d : false;
}

template <typename dataType>
dataType LinkedList<dataType>::operator [] (int i) {
	if (i >= _size) {
		std::cout << "Index out of range";
		exit(1);
	}
	int j = 0;
	Node<dataType>* cur=head;
	while (j++ != i)
		cur = cur->next;
	return cur->data;
}

template <typename dataType>
void LinkedList<dataType>::insert(int i, dataType data) {
	if (i > _size) {
		std::cout << "Index out of range";
		exit(1);
	}
	else if (i == 0) {
		Node<dataType>* tmp = head;
		head = new Node<dataType>(data);
		head->next = tmp;
	}
	_size++;
	int curi = 0;
	Node<dataType>* current = head;
	while (current){
		if (curi++ == i - 1) {
			Node<dataType>* tmp = current->next;
			current->next = new Node<dataType>(data);
			current->next->next = tmp;
			break;
		}
		current = current->next;
	} 
	return;
}
