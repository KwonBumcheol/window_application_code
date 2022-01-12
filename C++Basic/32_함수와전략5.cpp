#include <iostream>
using namespace std;

bool cmp1(int a, int b){ return a > b; } // 오름차순
bool cmp2(int a, int b){ return a < b; } // 내림차순

#include <algorithm> // 이미 정책 병경 가능한 sort가 이 안에 있다.

#include <functional>
// less<>, greater<> 함수 객체가 있다.

int main(){
    less<int> l;
    greater<int> g;

    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    sort(x, x+10);
    sort(x, x+10, &cmp1);

    sort(x, x+10, l);
    sort(x, x+10, g);

    for(int e : x){
        cout << e << endl;
    }
}