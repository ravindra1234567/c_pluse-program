#include<iostream>
using namespace std;
void fun1();
void fun2();
void __attribute__((constructor)) fun1();
void __attribute__((destructor)) fun2();
#pragma startup fun1()
#pragma exit fun2()

void fun1()
{
    int x , y=5,z=5;
    x=y==z;
    int i = (0,5,6,7);
    //int j = 1,2,3; error
    int j;
    j = 0,4,5,6;
    cout<<"Ravindra"<<j<<endl;
}
void fun2()
{
    cout<<"Kumar"<<endl;
}
int main()

{

    void fun1();
    void fun2();
    cout<<"main function"<<endl;
}
