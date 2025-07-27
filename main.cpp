//This program shows you the growing of a number
#include <bits/stdc++.h>
using namespace std;
int main()
{ int a[100], i, j, nr, n=0;
  cin>>nr;
  while(nr>0){
    n++;
    a[n]=nr%10;
    nr/=10;
  }
  for(j=1;j<=pow(2, n);j++)
    for(i=1;i<=n;i++)
      if(a[i]>a[i+1]) swap(a[i+1], a[i]);
  for(i=1;i<=n;i++)
    cout<<a[i];
    return 0;
}
