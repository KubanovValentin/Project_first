#include <iostream>
using namespace std;
main()
{

    int X1, Y1, X2 ,Y2;
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;
    if (X1 == X2 || Y1 == Y2)
        cout << "YES";
    else
        cout << "NO";
    return 0;



    /*
    int X1,Y1,X2,Y2;
    cin>>X1>>Y1>>X2>>Y2;
    int d=(Y2 - Y1) + (X2 - X1);
   cout<<d;
   */
}
//l = y 2 - y 1 + x 2 - x 1
