#include<iostream>
using namespace std;
class power
{
    int n;
    public:
    power()
    {
        n=2;
    }
    void operator ++();
    void disp();
};
void power::operator ++()
{
    n=n*n;
}
void power::disp()
{
    cout<<n;
}
int main()
{
    power p;
    ++ p;
    ++ p;
    ++ p;
    ++ p;
    p.disp();
}