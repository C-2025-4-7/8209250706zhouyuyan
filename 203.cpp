#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "请输入三角形的三条边长度：";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        double perimeter = a + b + c;
        cout << "该三角形的周长为：" << perimeter << endl;
        if (a == b || a == c || b == c)
        {
            cout << "这是一个等腰三角形" << endl;
        }
        else
        {
            cout << "这不是一个等腰三角形" << endl;
        }
    }
    else
    {
        cout << "输入的三条边不能构成三角形" << endl;
    }

    return 0;
}