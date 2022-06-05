#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, X, z = 0;
    cin >> N;
    vector <int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cin >> X;
    for (int i = 0; i < N; i++)
        if (arr[i] == X)
            z++;
    cout << z;
    return 0;
}
