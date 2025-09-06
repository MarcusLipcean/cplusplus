#include <bits/stdc++.h>
using namespace std;
int st[26], a[26], i;
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
for(int j=1; j<=i; j++){
st[p]=a[j];
if(vrf(p)) if(p==i) tipar(p);
           else bktr(p+1);
}
}
int main()
{ long long nr;
  cin>>nr;
  i=0;
  while(nr>0){
  i++;
  a[i]=nr%10;
  nr/=10;
  }
  bktr(1);
    return 0;
}
