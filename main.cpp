#include <bits/stdc++.h>
//This program gives you what is the max power of some guns
using namespace std;
ifstream fin("arme.in");
ofstream fout("arme.out");
int main()
{ int i, n, puteri[100], j, a, b, s=0;
  cin>>a>>b;
  n=a+b;
  for(i=1;i<=n;i++)
    cin>>puteri[i];
  for(j=1;j<=pow(2, n);j++)
    for(i=1;i<=n;i++)
      if(puteri[i]>puteri[i+1]) swap(puteri[i], puteri[i+1]);
  for(i=b+1;i<=n;i++)
    s+=puteri[i];
  cout<<s;
    return 0;
}
