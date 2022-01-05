#include <iostream>
using namespace std;

int main(){
    int count[10], arr[42] ={ 0, };
    int tmp = 0;

    for(int i = 0; i < 10; i++){
        cin >> count[i];
        if(!arr[count[i] % 42]++)
            tmp++;
    }
    cout << tmp;
}