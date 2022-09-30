#include<iostream>
using namespace std;
class greaternumber
{
    private:
         int a,b,c,maxx;
    public:
     void set(int x,int y,int z)
     {
          a=x;
          b=y;
          c=z;
     }
     int geta()
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
     int getmaxx()
     {
          return maxx;
     }
     void calculatemax()
     {
          maxx = (a>b&&a>c)?a:(b>c)?b:c;
     }
};
 int main()
 {
      greaternumber g;
      g.set(54,63,53);
      g.calculatemax();
      cout<<"maximum number  "<<g.geta()<<","<<g.getb()<<","<<g.getc()<<"  is  "<<g.getmaxx();
      return 0;
}
