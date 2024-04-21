//polymorphism operator overloading
#include<iostream>
using namespace std;
class add
{
    int m;
    public:
    add()
    {
        m=0;
    }
    void operator ++();
    void disp();
};
void add::operator ++()
{
    m=m+5;
    //cout<<m;
}
void add::disp()
{
    cout<<m;
}
int main()
{
    add a;
    ++ a;
    ++ a;
    ++ a;
    ++ a;
    a.disp();
}