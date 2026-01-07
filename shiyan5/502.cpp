// main.cpp
#include <iostream>
#include "student.h"
#include "student1.h"
using namespace std;

int main()
{
    Student stud;

    stud.set_value(7, "tcg", 'm'); // 通过成员函数赋值
    stud.display();

    return 0;
}
