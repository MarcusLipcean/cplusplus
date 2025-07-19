//This program tells you what men should marry the princess
#include <bits/stdc++.h>
using namespace std;
bool prim(int x){
int i; bool b=true;
for(i=1;i<=x/2;i++)
  if(x%i==0){
    b=false;
    break;
  }
return b;
}
int main()
{ int a[100], k, h, i=1, b[100], j, l, n=2; bool y=true;
  cin>>k>>h;
  for(j=1;j<=h;j++)
    cin>>b[j];
  while(i!=k){
   for(l=n;l<=9999;l++)
    if(prim(l)){
      for(j=1;j<=h;j++)
        if(l==b[j]) y=false;
    }
  if(y){
  a[i]=l;
  i++;
  }
  y=true;
  n=l;
  }
  for(l=1;l<=pow(2, n);l++)
    for(i=1;i<=k;i++)
      if(a[i]<a[i+1]) swap(a[i+1], a[i]);
  for(i=1;i<=k;i++)
    cout<<a[i]<<"  ";
    return 0;
}
