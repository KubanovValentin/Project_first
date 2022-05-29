#include <iostream>
/*
На столе лежат n монеток. Некоторые из них лежат вверх решкой, а некоторые – гербом.
Определите минимальное число монеток, которые нужно перевернуть, чтобы все монетки были повернуты вверх одной и той же стороной.

Монетки
Входные данные
В первой строке входного файла INPUT.TXT записано натуральное число N (1 ≤ N ≤ 100) – число монеток.
В каждой из последующих N строк содержится одно целое число – 1 если монетка лежит решкой вверх и 0 если вверх гербом.

Выходные данные
В выходной файл OUTPUT.TXT выведите минимальное количество монет, которые нужно перевернуть.
*/
using namespace std;
/*
main()
{
    int N,x;
    int result1=0;
    int result2=0;
    cin >> N ;
    for(int i=0;i<N;i++){
        cin >> x;
        if(x==0){
           result1++;
        }else if(x==1){
            result2++;
        }
    }
    if(result1>=result2){
        cout << result2;
    }else {
        cout << result1;
    }
}
*/