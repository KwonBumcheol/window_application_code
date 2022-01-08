#include <iostream>
using namespace std;

int main(){
    int T;
    int A, B, sum;

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> A >> B;
        sum = A + B;
        cout << sum << endl;
        sum = 0;
    }
}