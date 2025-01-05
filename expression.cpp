#include<bits/stdc++.h>
using namespace std;
int main (){

string s;
cin>>s;
bool valid=true;
int i;
if(s[0]=='='||s[s.size()-1]=='+'||s[s.size()-1]=='-'||s[s.size()-1]=='*'||s[s.size()-1]=='/'||s[s.size()-1]=='=')
            valid=false;
for(i=0;i<s.size()-1;i++){
    if(s[i]=='/'&& s[i+1]=='0')
        valid=false;
}
if(valid==true)
cout<<"valid"<<endl;
else
    cout<<"Invalid"<<endl;
return 0;


}
