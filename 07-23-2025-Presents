//This program shows you how many presents are going to boys and girls
#include <bits/stdc++.h>
using namespace std;
ifstream fin("cadouri.in");
ofstream fout("cadouri.out");
int main()
{ int b, f, n, eticheta, kf=0, kb=0, i;
  fin>>f>>b>>n;
  for(i=1;i<=n;i++){
    fin>>eticheta;
    if(eticheta%2==0) kf++;
    else kb++;
  }
  if(f<=kf) fout<<"0"<<endl;
  else fout<<f-kf<<endl;
  if(b<=kb) fout<<"0";
  else fout<<b-kb;
    return 0;
}
