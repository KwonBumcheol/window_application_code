#include <iostream>
using namespace std;

int main(){
    int arr[3];
    int tmp = 1;
    int count[10] = { 0, };

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        tmp *= arr[i];
    }

    while(tmp > 0){
        count[tmp % 10]++;
        tmp /= 10;
    }

    for(int i = 0; i < 10; i++){
        cout << count[i] << endl;
    }
    return 0;
}