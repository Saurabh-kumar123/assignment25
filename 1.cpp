#include<iostream>
using namespace std;
class Complex
{
private:
     int real,img;
public:
    void set(int x,int y)
     {
          real=x;
          img=y;
     }
public:
    void print()
     {
       cout<<real<<"+"<<img<<"i"<<endl;
     }
public:
      void add(Complex c)
     {
          cout<<real+c.real<<"+"<<img+c.img<<"i"<<endl;
     }
};
 int main()
 {
      Complex c1,c2;
      c1.set(3,5);
      c2.set(4,2);
      c1.print();
      c2.print();
       cout<<"-----"<<endl;
       c1.add(c2);
       cout<<"-----"<<endl;
      return 0;
 }
