#include<iostream>
using namespace std;
class rev
{
private:
     int n,c,re;
public:
     void set(int x)
     {
          n=x;
          c=x;
     }

     void revers()
     {
          int k=0;
          while(n)
          {
            k=k*10+n%10;
            n=n/10;
          }
          re = k;
     }
     int getre()
     {
          return re;
     }
      int get()
     {
          return c;
     }
};
 int main()
 {
      rev r;
      r.set(9876);
      r.revers();
      cout<<"Revers are "<<r.get()<<" is "<<r.getre();
      return 0;
 }
