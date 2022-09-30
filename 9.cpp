#include<iostream>
using namespace std;
class Circle
{
    private: int l;
    float a;
    public:
     void setdata(int x){l=x;}
     int getl(){return l;}
     void area_of_circle(){a=l*l*3.14;}
     float area(){return a;}
};
 int main()
 {
      Circle r;
      r.setdata(4);
      r.area_of_circle();
      cout<<"radius is "<<r.getl()<<endl;
      cout<<"Area of circle is "<<r.area();
      return 0;
 }
