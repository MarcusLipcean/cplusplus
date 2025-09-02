#include<bits/stdc++.h>
using namespace std;
bool divided(int x){
int i, k=0; bool b=false;
for(i=1;i<=x;i++)
  if(x%i==0) k++;
if(k==3) b=true;
return b;
}
int main()
{ int a, b, k=0;
  cin>>a>>b;
  for(a=a;a<=b;a++)
    if(divided(a)) k++;
  cout<<endl<<k;
    return 0;
}
