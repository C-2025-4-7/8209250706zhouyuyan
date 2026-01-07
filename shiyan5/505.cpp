#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    void setPoint(int i, int j)
    {
        this->x = 60 + i;
        this->y = 80 + j;
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
    Point(int x = 60, int y = 80)
    {
        this->x = x;
        this->y = y;
    }
};
int main()
{
    Point p;
    p.display();
    p.setPoint(1, 2);
    p.display();
    return 0;
}