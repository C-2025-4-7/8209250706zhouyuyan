#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "请输入第一个数字: ";
    cin >> num1;
    cout << "请输入运算符 (+, -, *, /, %): ";
    cin >> op;
    cout << "请输入第二个数字: ";
    cin >> num2;
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "错误：除数不能为0！" << endl;
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        // 取模运算通常用于整数，这里做类型检查
        if (num2 == 0)
        {
            cout << "错误：除数不能为0！" << endl;
        }
        else if (num1 != (int)num1 || num2 != (int)num2)
        {
            cout << "错误：取模运算只能用于整数！" << endl;
        }
        else
        {
            cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        break;
    default:
        cout << "错误：非法运算符！请使用 +, -, *, /, %" << endl;
    }

    return 0;
}