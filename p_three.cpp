#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=a-b;
    if(c%10==1){ c=((c/10)*10)+2;}
    else{c=((c/10)*10)+1;}
    cout<<c<<endl;
}
