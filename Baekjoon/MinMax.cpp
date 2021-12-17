#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); // cout, cin 속도 증가
    int N, i;

    int array[1000000] = {};
    
    cin >> N;
    
    for(i = 0; i < N; i++){
        cin >> array[i];
    }
    sort(array, array+N);
    cout << array[0] << " " << array[N-1] << endl;
}

