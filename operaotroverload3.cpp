#include<iostream>
using namespace std;
class add
{
    int n;
    public:
    add()
    {
        n=0;
    }
    friend void operator++(add a);
    void disp();
};
void operator ++(add a)
{
    a.n=a.n+5;
    cout<<a.n;
}
void add::disp()
{
    cout<<n;
}
int main()
{
    add a;
    ++ a;
    ++ a;

}