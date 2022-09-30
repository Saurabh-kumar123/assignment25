#include<iostream>
using namespace std;
class factorial
{
private:
     int n,fact;
public:
     void set(int x)
     {
          n=x;
     }
     int getN()
     {
          return n;
     }
     int getfact()
     {
          return fact;
     }
     void calculatefactorial()
     {
          int f=1;
          for(int i=1;i<=n;i++)
               f=i*f;
          fact = f;
     }
};
  int main()
  {
       factorial ft;
       ft.set(5);
       ft.calculatefactorial();
       cout<<"factorial of "<<ft.getN()<<" is "<<ft.getfact();
       return 0;
  }
