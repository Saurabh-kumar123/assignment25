#include<iostream>
using namespace std;
class greatest
{
private:
     int a,b,c,maxx;
     public:
     void setdata(int x,int y,int z)
     {
          a=x;b=y;c=z;
     }
     void great()
     {
          maxx=a>b&&a>c?a:b>c?b:c;
     }
     int getgreat()
     {
          return maxx;
     }int geta()
     {
          return a;
     }
     int getb()
     {
          return b;
     }
     int getc()
     {
          return c;
     }

};
 int main()
 {
      greatest g;
      g.setdata(7,16,15);
      g.great();
      cout<<"greatest number are "<<g.geta()<<" "<<g.getb()<<" "<<g.getc()<<" --> "<<g.getgreat();
      return 0;
 }
