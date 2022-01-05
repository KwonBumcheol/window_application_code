#include <iostream>
using namespace std;

int main(){
    int arr[9];
    int temp = 0, num = 0;

    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        if(temp < arr[i]){
            temp = arr[i];
            num = i;
        }
    }

    cout << temp << endl << num+1;

    return 0;
}