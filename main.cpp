#include<iostream>
using namespace std;
main()
{
int a[1000],i,n,k,L,R,m=0;
cin>>n;

for(i=1;i<=n;i++){
    cin>>a[i];
}
cin>>k;

for(i=0;i<=n;i++){
    if (a[i]>=k){
        m++;
    }
}
cout<<m;
}
