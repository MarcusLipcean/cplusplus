#include <bits/stdc++.h>
using namespace std;
int st[26], a[26], i, n;
void tipar(int p){
for(int j=1; j<=p/2; j++) cout<<st[j]<<" ";
cout<<endl;
for(int j=p/2+1; j<=p; j++) cout<<st[j]<<" ";
cout<<endl<<endl;

}
bool vrf(int p){
bool b;
  b=true;
  for(int o=1; o<p; o++)
    if(st[p]==st[o]) b=false;
if(p!=1 && p!=n+1) return b && st[p]>st[p-1];
else return b;
}
void bktr(int p){
for(int j=1; j<=n*2; j++){
st[p]=a[j];
if(vrf(p)) if(p==n*2) tipar(p);
           else bktr(p+1);
}
}
int main()
{
  cin>>n;
  for(i=1; i<=n*2; i++)
    cin>>a[i];
  bktr(1);
    return 0;
}
