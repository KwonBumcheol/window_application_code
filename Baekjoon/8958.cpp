#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char arr[100]; // OX넣을 공간
    int T;
    int score = 0, tmp = 0;

    cin >> T; // 테스트 케이스

    for(int i = 0; i < T; i++){
        cin >> arr;

        for(int j = 0; j < strlen(arr); j++){
            if(arr[j] == 'O'){
                score++;
                tmp += score;
            }
            else if(arr[j] == 'X'){
                score = 0;
            }
        }

        cout << tmp << endl;
        tmp = 0;
        score = 0;
    }

    return 0;
}