#include <bits/stdc++.h>
using namespace std;
char st[100];
string s;
void tipar(int p){
for(int j=1; j<=p; j++) cout<<st[j];
cout<<endl;
}
bool vrf(int p){
bool b=true;
for(int o=1; o<p; o++)
  if(st[p]==st[o]) b=false;
return b;
}
void bktr(int p){
for(int j=0; j<s.length(); j++){
st[p]=s[j];
if(vrf(p)) if(p==s.length()) tipar(p);
           else bktr(p+1);
}
}
int main()
{
 cin>>s;
 bktr(1);
    return 0;
}
