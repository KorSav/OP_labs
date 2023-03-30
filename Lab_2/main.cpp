#include "funcs.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string file, dest;
    file.resize(NAME_MAXLEN+4);
    char c;
    cout << "Input filename without extension (max length - " << NAME_MAXLEN << " symbols): ";
    enter_string(file, NAME_MAXLEN);
    file.append(".dat");
    if (file_exists(file)) {
        cout << "File contains:";
        file_print(file);
        cout << "Do you want to append data to this file? (y/n)"; 
        cin >> c; cin.ignore(LLONG_MAX, '\n');
        if (tolower(c) == 'y')
            file_append(file);
    }
    else file_write(file);
    cout << "File contains:";
    file_print(file);
    cout << "Removing late trips" << endl;
    file_delinfo(file);
    cout << "The late trips were removed from file, now it contains:";
    file_print(file);
    cout << "Enter the destination place to find the last bus: ";
    enter_string(dest, DEST_MAXLEN);
    file_lastbus(file, dest);
    return 0;
}
/*
���� �
23:00
17:01
y
���� �
23:00
3:00
y
���� �
8:59
13:59
y
���� �
8:59
14:03
y
���� �
12:45
8:45
y
���� �
13:45
6:45
n

-----------------
���� �
23:48
17:2
y
���� �
0:30
18:20
n

*/
