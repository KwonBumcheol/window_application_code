

// ++ 연산자는 C/C++의 동장이 다르다.
#include <stdio.h>

int main(){
    int n = 0;

    ++++++++n; // C에서는 값이 변환한다.
               // 값을 다시 증가할 수 없다.
               // C++에서는 참조가 변환한다.
               // 참조는 다시 증가시킬 수 있다.
    printf("%d\n", n);
}