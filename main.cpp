#include <bits/stdc++.h>
using namespace std;
int st[100], s;
bool b=true;
void tipar(int p){
for(int j=1; j<=p; j++) cout<<st[j]<<" ";
cout<<endl;
}
int suma(int p){
int sm=0;
for(int j=1; j<=p; j++)
sm=sm+st[j];
return sm;
}
bool prim(int x){
bool b=true;
for(int i=2; i<=x/2; i++)
if(x%i==0) b=false;
return b;
}
bool vrf(int p){
return st[p-1]<=st[p];
}
void bktr(int p){
for(int j=2; j<=s; j++){
st[p]=j;
if(prim(j) && vrf(p)) if(p==3){if(suma(p)==s) tipar(p);}
           else bktr(p+1);
}
}
int main()
{
cout<<"S:";
cin>>s;
bktr(1);
    return 0;
}
