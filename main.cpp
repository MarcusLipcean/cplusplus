#include <bits/stdc++.h>
using namespace std;
int binar[100], n, a[100], x, mx=0, mb[100];
bool suma(){
int s=0;
bool b;
x=0;
for(int j=1; j<=n; j++)
  if(binar[j]==1) {x++; s+=a[j];};
  if(s%3==0) b=true;
  else b=false;
return b;
}
int main()
{ int i, j, k;
  cin>>n;
  for(i=1; i<=n; i++){
    cin>>a[i];
    binar[i]=0;
  }
  for(j=1; j<pow(2, n); j++){
    k=n;
    while(binar[k]==1){
      binar[k]=0;
      k--;
    }
    binar[k]=1;
    if(suma()) if(x>mx){
      mx=x;
      for(int o=1; o<=n; o++)
        mb[o]=binar[o];
    }
  }
  cout<<mx<<endl;
  for(i=1; i<=n; i++)
    if(mb[i]==0) cout<<a[i]<<"  ";
    return 0;
}
