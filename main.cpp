//This program says to you how much money is in a ATM after some transfers
#include <bits/stdc++.h>
using namespace std;
ifstream fin("bancomat.in");
ofstream fout("bancomat.out");
int main()
{ int s, i, n, nr;
  fin>>s>>n;
  for(i=1;i<=n;i++){
    fin>>nr;
    if(nr%10==2){nr/=10; s+=nr;}
    else if(s>nr){nr/=10; s-=nr;}
  }
  fout<<s;
    return 0;
}
