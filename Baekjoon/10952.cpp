#include <iostream>
using namespace std;

int main(){
    int T1, T2;

    while(cin >> T1 >> T2){
        if(T1 == 0 && T2 == 0)
            break;
        cout << T1 + T2 << endl;
    }
}