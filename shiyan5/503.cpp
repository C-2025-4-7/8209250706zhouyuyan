#include <iostream>
using namespace std;
class mytriangle
{
private:
    int high;
    int width;
    int mlong;
    int area;

public:
    void settriangle()
    {
        cin >> high >> width >> mlong;
    }
    void settriangle(int high, int width, int mlong)
    {
        this->high = high;
        this->width = width;
        this->mlong = mlong;
    }
    void cs()
    {
        area = mlong * high * width;
    }
    void show()
    {
        cout << high << " " << width << " " << mlong << " ";
    }
};
int main()
{
    mytriangle m1;
    m1.settriangle();
    m1.show();
    return 0;
}