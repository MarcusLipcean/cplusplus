//This program shows you the first consecutive sequence of points won by some guys.
#include <bits/stdc++.h>
using namespace std;
int main()
{ int i, n, s=0, a[100], k=1, m;
  cin>>n;
  for(i=1;i<=n;i++)
    cin>>a[i];
  for(i=1;i<n;i++){
    if(a[i]==a[i+1]){
      m=a[i];
      k++;
      if(a[i+1]!=a[i+2]) break;
    }
  }
  cout<<m<<"  ";
  for(i=1;i<=k;i++)
    s+=m;
  cout<<s;
      return 0;
}
