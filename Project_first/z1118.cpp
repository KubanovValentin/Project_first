#include <iostream>
/*
Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров.
На какой день улитка доползет до вершины шеста?

Входные данные
Входной файл INPUT.TXT содержит натуральные числа H, A и B. Ограничения: H ≤ 1000, B < A ≤ 100.

Выходные данные
В выходной файл OUTPUT.TXT выведите натуральное число – количество дней, необходимых улитке для достижения вершины шеста.
*/
using namespace std;
/*
main()
{
    int H,A,B,n=1;
    cin>>H>>A>>B;
    if(A<H){
        n+=(H-A)/(A-B);
        if((H-A)%(A-B)>0){
            n++;
        }

    }
    cout<<n;
}
*/
