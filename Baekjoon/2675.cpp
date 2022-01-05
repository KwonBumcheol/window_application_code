#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    int R;
    string S;

    cin >> T; // 첫 번째 줄

    for(int i=0; i<T; i++){
        cin >> R >> S; // 두 번째 줄
        for(int j=0; j<S.length(); j++){
            for(int k=0; k<R; k++){
                cout << S[j];
            }
        }
        cout << endl;
    }
    return 0;
}