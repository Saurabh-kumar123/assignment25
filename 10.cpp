#include<iostream>
using namespace std;
class Area
{
    private: int l,b,c;
    float a;
    public:
     float area_of_circle(int r)
     {
          a=r;
          return a*a*3.14;
          }
     int area_of_rectangle(int x,int y)
     {
        l=x;
        b=y;
          return l*b;
          }
     int  area_of_square(int x)
     {
         c=x;
          return c*c;
          }
};
 int main()
 {
      Area r;
      cout<<"Area of circle is "<<r.area_of_circle(5)<<endl;
      cout<<"Area of rectangular is "<<r.area_of_rectangle(3,6)<<endl;
      cout<<"Area of square is "<<r.area_of_square(7);
      return 0;
 }

