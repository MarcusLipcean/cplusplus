//This program shows you what numbers have a equal center
#include <bits/stdc++.h>
using namespace std;
int main()
{ int a[100], i, k=0, nr, n, cifre[100], j, l; bool b=true;
  cin>>n;
  for(i=1;i<=n;i++)
    cin>>a[i];
  for(j=1;j<=9;j++)
    cifre[j]=0;
  for(i=1;i<=n;i++){
    j=0;
    b=true;
    if(a[i]/100>=1 && a[i]/100<=9) k++;
    else{
      a[i]/=10;
      while(a[i]>9){
        nr=nr*10+a[i]%10;
        a[i]/=10;
      }
     while(nr>0){
     j++;
     cifre[j]=nr%10;
     nr/=10;
     }
     for(l=1;l<j;l++)
       if(cifre[l]!=cifre[j+1]) b=false;
     if(b) k++;
    }
  }
  cout<<k;
    return 0;
}
