#include <iostream>
using namespace std;
class student
{
private:
    int num;
    int score;

public:
    void set()
    {
        cin >> num >> score;
    }
    int get()
    {
        return score;
    }
    void show()
    {
        cout << num;
    }
};
void max(student *s)
{
    int maxs = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i].get() > s[maxs].get())
            maxs = i;
    }
    s[maxs].show();
}
int main()
{
    student s[5];
    for (int i = 0; i < 5; i++)
        s[i].set();
    max(s);
    return 0;
}