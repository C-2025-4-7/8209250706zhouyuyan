#include <iostream>
using namespace std;
int main()
{
    double x;
    cin >> x;
    double ans;
    if (x > 0 && x < 1)
    {
        ans = 3 - 2 * x;
    }
    if (x >= 1 && x < 5)
    {
        ans = 0.5 / x + 1;
    }
    if (x >= 5 && x < 10)
    {
        ans = x * x;
    }
    cout << ans;
    return 0;
}