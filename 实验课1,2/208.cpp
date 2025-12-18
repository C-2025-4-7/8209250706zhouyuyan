#include <iostream>
#include <algorithm>
using namespace std;
void f(double x, double a)
{
    double temp = (x + a * 1.0 / x) / 2;
    if (abs(temp - x) < 0.00001)
    {
        cout << temp;
        return;
    }
    else
        f(temp, a);
}
int main()
{
    double a;
    cin >> a;
    f((a + 1) / 2, a);
    return 0;
}