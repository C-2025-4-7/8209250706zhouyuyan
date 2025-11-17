#include <iostream>
using namespace std;
int main()
{
    int d = 2;
    int cnt = 0;
    int sum = 0;
    while (d <= 100)
    {
        sum += d;
        d *= 2;
        cnt++;
    }
    double ans = sum * 0.8 / cnt;
    cout << ans;
    return 0;
}