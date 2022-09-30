#include<iostream>
using namespace std;
class time
{
private:
     int hor,mint,sec;
public:
     void set(int x,int y,int z)
     {
          hor=x;
          mint=y;
          sec=z;
     }
    void print()
     {
          cout<<hor<<":"<<mint<<":"<<sec;
     }
};
  int main()
  {
       time t;
       t.set(2,30,45);
       t.print();
       return 0;
  }
