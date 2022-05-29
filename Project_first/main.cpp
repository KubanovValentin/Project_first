#include <iostream>
using namespace std;
main()
{
int X1,Y1,X2,Y2;
cin>>X1>>Y1>>X2>>Y2;
cout<<(X1==X2||Y1==Y2||X1-X2==Y1-Y2||X2-X1==Y2-Y1||-(X1-X2)==Y1-Y2||-(X2-X1)==Y2-Y1?"YES":"NO");
}
