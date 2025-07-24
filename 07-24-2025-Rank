//This program shows you how many words you introduced and how they are grupped
#include <bits/stdc++.h>
using namespace std;
ifstream fin("grad.in");
ofstream fout("grad.out");
int main()
{ int n,i,k, grad[1000],s,c=0,v=0; string alfa="",text; char x;
  for(x='a';x<='z';x++) alfa=alfa+x;
  for(i=1;i<100;i++) grad[i]=0;
  fin>>n; i=0;
  getline(fin,text);
  getline(fin,text); cout<<text<<endl;
  while (i<n){
    x=text[i];
    while (x==' ') {i++;x=text[i];}
    k=0;c++; cout<<x;
    while (x!=alfa[k]) k++; k++; s=k;
    while (i<n && x!=' ') {
             i++; x=text[i];cout<<x;
     if (x!=' ')  {
        k=0;
    while (x!=alfa[k]) k++; k++; s+=k;
     }
    } grad[s]++; cout<<" s="<<s<<endl;

  }
   cout<<c<<endl;
   for(i=1;i<100;i++) if (grad[i]>0) v++;
   cout<<endl<<v;
    return 0;
}
