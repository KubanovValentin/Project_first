#include <iostream>
/*
В галактике «Milky Way» на планете «Snowflake» есть N городов, некоторые из которых соединены дорогами.
Император галактики «Milky Way» решил провести инвентаризацию дорог на планете «Snowflake».
 Но, как оказалось, он не силен в математике, поэтому он просит вас сосчитать количество дорог.
 Требуется написать программу, помогающую императору сосчитать количество дорог на планете «Snowflake».

Входные данные
В первой строке входного файла INPUT.TXT записано число N (0 ≤ N ≤ 100). В следующих N строках записано по N чисел, каждое из которых является единичкой или ноликом.
 Причем, если в позиции (i, j) квадратной матрицы стоит единичка, то i-ый и j-ый города соединены дорогами, а если нолик, то не соединены.
 Гарантируется, что все дороги соединяют различные города.

Выходные данные
В выходной файл OUTPUT.TXT необходимо вывести число, определяющее количество дорог на планете «Snowflake».
*/
using namespace std;
/*
main()
{
int n,i,j,b,z=0;
cin >>n;
for (i=1;i<=n;i++)
for (j=1;j<=n;j++)
{
cin>>b;
z+=b;
}
cout<<z/2;
}
*/
