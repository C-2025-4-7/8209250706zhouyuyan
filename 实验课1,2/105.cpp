#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double f;
    cin >> f;
    double ans = 5 * (f - 32) / 9;
    cout << fixed << setprecision(2) << ans;
    return 0;
}