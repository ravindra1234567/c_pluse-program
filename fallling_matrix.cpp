// C++ program to fetch key pressed using
// kbhit()
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;
    while(1)
    {

        if(kbhit)
        {

            cin>>ch;
            if(int(ch) == 27)
                break;
            cout<<"Key pressed = "<<ch;
        }
    }
}
