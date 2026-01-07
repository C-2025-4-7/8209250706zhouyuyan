#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int sec;

public:
    void cinTime()
    {
        cin >> hour >> minute >> sec;
    }

    void coutTime()
    {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main()
{
    Time t1; // 定义t1为Time类对象
    t1.cinTime();
    t1.coutTime();
    return 0;
}