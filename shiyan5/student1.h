// student.cpp
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

void Student::set_value(int n, string a, char s)
{
    num = n;
    name = a;
    sex = s;
}

void Student::display()
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
