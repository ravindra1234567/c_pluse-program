#include <iostream>
using namespace std;

int main() {
        int a,b,sum,n,matchs=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            sum =a+b;
            string str = to_string(sum);
            //cout<<str[0];
            int len = str.length();
            //cout<<len<<endl;
            for(int j=0; j<len; j++)
            {
                //cout<<str[j];
                switch(str[j])
                {
                    case '0':
                    matchs = matchs+6;
                        break;
                    case '1':
                        matchs = matchs+2;
                        break;
                    case '2':
                        matchs = matchs+5;
                        break;
                    case '3':
                        matchs = matchs+5;
                        break;
                    case '4':
                        matchs = matchs+4;
                        break;
                    case '5':
                        matchs = matchs+5;
                        break;
                    case '6':
                        matchs = matchs+6;
                        break;
                    case '7':
                        matchs = matchs+3;
                        break;
                    case '8':
                        matchs = matchs+7;
                        break;
                    case '9':
                        matchs = matchs+6;
                        break;
                }
            }//cout<<endl;
            cout<<matchs<<endl;
            matchs=0;
        }
	return 0;
}
