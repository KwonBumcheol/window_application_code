#include <iostream>
using namespace std;

int main(){
    int T;

    cin >> T;
    char N[T];

    int tmp = 0;

    for(int i=0; i<T; i++){
        cin >> N[i];
        tmp += N[i] - '0'; // 48
    }
    cout << tmp;
    return 0;
}