#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* convert string to number */
    string str ="6.2 ";
    string str1 ="1.2";
    stringstream abc(str);
    float  a;
    abc>>a;
    float b = stof(str1);
    cout<<b<<endl;
    cout<<a<<endl;
    //float aa = boost::lexical_cast<float>(str1);
    //float f_value = boost::lexical_cast<float>(str1);
    //cout<<f_value;

      /* convert number to string */
      int num = 210;
      double nn = 3333.33;
      ostringstream st;
      st<<num;
      string s = st.str();
      cout<<typeid(nn).name()<<endl;
      string df = to_string(num);
      cout<<df;
    return 0;

}
