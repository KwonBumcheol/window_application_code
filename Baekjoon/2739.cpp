#include <iostream>
using namespace std;

int main(){
    int N, tmp;

    cin >> N;

    for(int i=1; i<=9; i++){
        tmp = i * N;
        cout << N << " * " << i << " = " << tmp << endl;
        tmp = 0;
    }
    return 0;
}