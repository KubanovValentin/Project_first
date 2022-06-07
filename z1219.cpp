#include<iostream>
/*
Дана последовательность натуральных чисел 1, 2, 3, ..., N.
Необходимо сначала расположить в обратном порядке часть этой последовательности от элемента с номером A до элемента с номером B, а затем от C до D.

Входные данные
Входной файл INPUT.TXT содержит 5 натуральных чисел N, A, B, C и D (A ≤ B; C ≤ D; 1 ≤ A, B, C, D ≤ N ≤ 1000).

Выходные данные
В выходной файл OUTPUT.TXT выведите полученную последовательность, полученную в результате двойного переворота.
*/
using namespace std;
/*
main()
{
int x[1001],i,N,A,B,C,D,y;
cin>>N>>A>>B>>C>>D;

for(i=1;i<=N;i++)
x[i]=i;

for(i=A;i<=(A+B)/2;i++)
{
y=x[i];
x[i]=x[B+A-i];
x[B+A-i]=y;
}

for(i=C;i<=(C+D)/2;i++)
{
y=x[i];
x[i]=x[D+C-i];
x[D+C-i]=y;
}
for(i=1;i<=N;i++)
cout<<x[i]<<' ';
}
*/