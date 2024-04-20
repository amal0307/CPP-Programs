#include<iostream>
using namespace std;
class areas
{
    int side,length,breadth;
    double radius;
    public:
    void area(int side);
    void area(int length,int breadth);
    void area(double radius);
};
void areas::area(int side)
{
    cout<<"Enter side of square\n";
    cin>>side;
    cout<<"Area of square is.."<<side*side;
}
void areas::area(int length,int breadth)
{
    cout<<"Enter length and breadth of rectangle\n";
    cin>>length>>breadth;
    cout<<"Area of rectamgle is.."<<length*breadth;
}
void areas::area(double radius)
{
    cout<<"Enter radius of cirlce\n";
    cin>>radius;
    cout<<"Area of circle is.."<<3.14*radius*radius;
}
int main()
{
    areas a;
    a.area(5);
    a.area(5,6);
    a.area(5.0);
}