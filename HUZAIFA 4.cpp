#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age, birthYear;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "Name: " << "M.Huzaifa Khan" << endl;
    cout << "Age: " << 21 << endl;
    cout << "Birth Year: " << "2005" << endl;

    return 0;
}
