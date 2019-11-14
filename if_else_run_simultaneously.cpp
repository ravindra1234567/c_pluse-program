#include<iostream>
using namespace std;
int main()
{
    int i=0;
    if(1)
    {
        label_1:
            cout<<"Ravindra"<<endl;
            goto label_2;
    }
    else
    {
        goto label_1;
        label_2:
            cout<<"Kushwaha"<<endl;

    }
    return 0;
}
