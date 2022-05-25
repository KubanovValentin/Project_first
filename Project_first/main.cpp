#include<iostream>
#include<string>
using namespace std;
main(){
int d,n, c[26]={2,7,1,8,2,8,1,8,2,8,4,5,9,0,4,5,2,3,5,3,6,0,2,8,7,5};
cin>>n;
if (n!=0) {
for (d=0; d<=n; d++) {
if (d==1) cout<<".";
if (d==n&&c[n+1]>=5&&n!=25) c[d]=c[d]+1;
cout<<c[d]; } }
else cout<<"3";
}
