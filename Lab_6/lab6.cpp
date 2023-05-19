#include "LinkedList.h"

using namespace std;

template <typename T>
void processList(int size) {
    LinkedList<T> lst;
    int pos;
    T data;
    cout << "Input " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> data;
        lst.insert(i, data);
    }
    cout << "Size of list: " << lst.size() << endl;
    cout << "Output list using iterator:\n[";
    for (auto el : lst)
        cout << el << ", ";
    cout << "\b\b]\n";
    
    cout << "Input element to find it in list: "; cin >> data;
    if (lst.find(data)) cout << "Node is in list\n";
    else cout << "Node not in list\n";

    cout << "Input new element: "; cin >> data;
    cout << "Input its position from 0 to " << lst.size() << ": "; cin >> pos;
    lst.insert(pos, data);

    cout << "Output list using [] operator:\n[";
    for (int i = 0; i < lst.size(); i++)
        cout << lst[i] << ", ";
    cout << "\b\b]\n";
}

int main()
{
    int size, type;
    cout << "Input size: ";
    cin >> size;
    cout << "Input type of data (1-int, 2-float, 3-char, 4-string): ";
    cin >> type;
    if (type == 1) processList<int>(size);
    else if (type == 2) processList<float>(size);
    else if (type == 3) processList<char>(size);
    else if (type == 4) processList<string>(size);
    else { cout << "Wrong type"; return 1; }
    return 0;
}

