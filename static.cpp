//Static data members and methods
#include <iostream>
using namespace std;
class employee
{
   int id;
   static int counter;
   public: void setdata(void);
          void getdata(void);

};
void employee::setdata()
{
     cout<<"Enter employee id: "<<endl;
     cin >> id;
}
void employee::getdata(void)
{
    cout<<"Employee id is: "<<id<<endl;
     
}
int main()
{
    employee om;
    om.setdata();
    om.getdata();

return 0;
} 