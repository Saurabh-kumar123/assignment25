#include<iostream>
using namespace std;
class Square
{
private:
     int n,m;
public:
     static int c;
public:
     void setdata(int x)
     {
          n=x;
     }
     int get()
     {
          return n;
     }
     void  square()
     {
          m=n*n;
          c++;
     }
     int getsquare()
     {
          return m;
     }
};
 int Square::c=0;
  int main()
  {
       Square s1,s2,s3;
       s1.setdata(6);
       s1.square();
       s2.square();
       s3.square();
       cout<<"Square is "<<s1.get()<<" --> "<<s1.getsquare()<<endl;
       cout<<"total number function run on "<<Square::c;
       return 0;
  }
