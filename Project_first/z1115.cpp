#include <iostream>
/*
N школьников желают разделить K яблок между собой. Они рассматривают два способа дележа:

разделить яблоки поровну так, чтобы каждому досталось максимальное количество яблок, при этом оставшиеся яблоки можно положить в корзину;
разделить все яблоки так, чтобы количество яблок, доставшихся любым двум школьникам, отличалось бы не более, чем на 1.
В этом случае могут обидеться те из них, кому достанется яблок меньше, чем другим.
Входные данные
Входной файл INPUT.TXT содержит натуральные числа N и K – количество школьников и яблок соответственно (N,K ≤ 109).

Выходные данные
В выходной файл OUTPUT.TXT выведите три целых числа через пробел:

a.количество яблок, которые достанутся всем школьником при первом способе дележа;
b.количество яблок, которые окажутся в корзине при первом способе дележа;
c.количество обиженных школьников во втором случае дележа.
*/
using namespace std;
/*
main() {
int N,K,a,b,c;
cin >> N >> K;

a = K % N;
if(a!=0){
    c = N - a;
}else{
    c=0;
}
b = K / N;
cout<< b << " " << a << " " << c;
}
*/
