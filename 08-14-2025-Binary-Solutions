//This program writes you all the posibile solutions with binary figurations
#include <bits/stdc++.h>
using namespace std;
int n,st[100];
void tipar(int p){
for(int i=1;i<=p;i++) cout<<st[i]<<"  ";
cout<<endl;
}
void bktr(int p){
for(int k=0;k<=1;k++){
  st[p]=k;
  if(p==n) tipar(p);
  else bktr(p+1);
}
}
int main()
{
cin>>n;
bktr(1);
    return 0;
}
