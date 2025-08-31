#include <bits/stdc++.h>
using namespace std;
ifstream fin("numbers.in");
ofstream fout("numbers.out");
int main()
{ int a[100], i, numbers[100], n, j=0;
  while(!fin.eof()){
  n++;
  fin>>a[n];
  }
  for(i=0;i<=100;i++)
    numbers[i]=0;
  for(i=1;i<=n;i++){
    numbers[a[i]]++;
    cout<<numbers[a[i]]<<"  "<<a[i];
    if(a[i]!=a[i+1]) fout<<a[i]<<" "<<numbers[a[i]]<<" ";
    numbers[a[i]]=0;
  }
    return 0;
}
