#include<iostream>
using namespace std;
class Rectanglur
{
    private: int l,b,a;
    public:
     void setdata(int x,int y){l=x;b=y;}
     int getl(){return l;}
     int getb() {return b;}
     void area_of_rectangle(){a=l*b;}
     int area(){return a;}
};
 int main()
 {
      Rectanglur r;
      r.setdata(4,7);
      r.area_of_rectangle();
      cout<<"length is "<<r.getl()<<endl<<"breath is "<<r.getb()<<endl;
      cout<<"Area of rectangular is "<<r.area();
 }
