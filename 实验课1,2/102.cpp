#include <iostream>
using namespace std;
const double pie = 3.14;
int main()
{
    int r, h;
    cin >> r >> h;
    double ans;
    ans = 1.0 * pie * r * r * h / 3;
    cout << ans;
    return 0;
}