//This program generates you a number out of x figures, with the first figure being y and the others being z
#include <bits/stdc++.h>
using namespace std;
ifstream fin("xyz.in");
ofstream fout("xyz.out");
int main()
{ int x, y, z, i, num;
  fin>>x>>y>>z;
  if(x==1) fout<<y;
  else{
    num=y;
    for(i=2;i<=x;i++)
      num=num*10+z;
  }
  fout<<num;
  fin.close();
  fout.close();
    return 0;
}
