#include <iostream>
#define N 10001
using namespace std;

bool arr[N];

int d(int n){
    int sum = n; // 자기 자신 먼저 더해줌

    while(1){ // 각 자리수의 숫자를 더해야함 -> 1의 자리를 계속 더해준다
        if(n == 0) // 0이 되면 멈춤
            break;
        sum += n%10; // 1의 자리 더해주기
        n = n/10; // 한자리씩 제거
    }
    return sum;
}

int main(){
    for(int i=1; i<N; i++){
        int idx = d(i);

        if(idx <= N){
            arr[idx] = true; // 셀프 넘버 아닌 수 true로 변경
        }
    }

    for(int i=1; i<N; i++){
        if(!arr[i])
            cout << i << endl;
    }
    return 0;
}