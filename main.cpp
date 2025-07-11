#include <bits/stdc++.h>
//This program tells you how many eurics you have after you do a call to somebody, or someone calls you
using namespace std;
ifstream fin("alo.in");
ofstream fout("alo.out");
int main()
{ int n, e, nr, cati, i, cine, retea;
  cin>>e>>n;
  for(i=1;i<=n;i++){
    cin>>nr>>cati;
    retea=nr%10;
    cine=nr/10000;
    if(cine==1 && retea==5) e=e-cati*2;
    else if(cine==2 && retea==5) e=e+cati;
    }
  cout<<"Au ramas: "<<e<<" eurici";
  return 0;
  }
