#include <bits/stdc++.h>
using namespace std;
int s, n, a[100];
char sl[100];
void tipar(int p){
for(int j=1;j<=p;j++) cout<<sl[j]<<a[j];
}
int f(int p){
int sm=0;
for(int j=1;j<=p;j++)
  if(sl[j]=='+') sm+=a[j];
  else sm-=a[j];
return sm;
}
void bktr(int p){
for(int j=1;j<=2;j++){
if(j==1) sl[p]='+';
else sl[p]='-';
if(f(p)<=s) if(f(p)==s && p==n) tipar(p);
            else bktr(p+1);
}
}
int main()
{
  cin>>s>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  bktr(1);
    return 0;
}
