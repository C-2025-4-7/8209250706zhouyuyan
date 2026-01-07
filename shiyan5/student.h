// student.h
#ifndef STUDENT_H // 如果没有定义 STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
public:
    void set_value(int n, std::string a, char s);
    void display();

private:
    int num;
    std::string name;
    char sex;
};
#endif