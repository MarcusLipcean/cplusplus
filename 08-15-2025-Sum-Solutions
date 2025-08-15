#include <bits/stdc++.h>
using namespace std;
int s, a[100], st[100], k;
void tipar(int p){
for(int j=1; j<=p; j++) cout<<st[j]<<"  ";
cout<<endl;
}
int suma(int p){
int sm=0;
for(int j=1; j<=p; j++) sm=sm+st[j];
return sm;
}
bool vrf(int p){
return suma(p)<=s;
}
void bktr(int p){
for(int j=1; j<=k; j++){
st[p]=a[j];
if(suma(p)==s) tipar(p);
else bktr(p+1);
}
}
int main()
{
cin>>s>>k;
for(int j=1; j<=k; j++)
    cin>>a[j];
bktr(1);
    return 0;
}
