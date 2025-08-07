#include <iostream>
#include "Greeter.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string name;
    cout << "Введите имя: ";
    cin >> name;
    NameHello::Greeter men(name);
    cout << men.ptintinfo();
}
