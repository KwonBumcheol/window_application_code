#include <iostream>
using namespace std;

// C++에서는 파라미터의 타입이나 개수가 다르면,
// 동일한 이름의 함수를 여러개 만들 수 있다.
// => "함수 오버로딩"이라고 한다.
// => 컴파일러가 함수의 파라미터 정보를 통해 이름을 생성한다.
//    > 파라미터의 개수와 타입이 다르면 다른 이름이 생성된다.
//      "네임 맹들링"
// 주의사항
//  - 반환 타입은 함수 이름에 영향을 미치지 않는다.
//    > 파라미터가 동일하고 반환타입이 다른 함수는 오버로딩이 불가능하다.
// int foo() {}
// void foo() {}

// void goo(int a) {}
// void goo(int a, int b =100) {}
// goo(10);
// > 컴파일러는 어떤 함수를 호출할지 결정할 수 없다. - 컴파일 오류!
6

/*
int square(int x){
    printf("int\n");
    return x*x;
}
*/

/*
double square(double x){
    printf("double\n");
    return x*x;
}
*/

char square(char c){
    printf("char\n");
    return c*c;
}

long square(long l){
    printf("long\n");
    return l*l;
}

float square(float x){
    printf("float\n");
    return x*x;
}

// 오버로딩 규칙
// 1) 정확한 타입을 찾는다.
//    square(42) -> square(int)
// 2) 상승
//    square(int) -> square(long)
// 3) 호환
//    square(int) -> square(char)

// 매크로 함수
// - 문제점
// #define SQUARE(x) ((x)*(x))
// 치환이기 때문에 우선순위에 대한 주의가 필요하다.
// > 괄호를 통해서 매크로 함수의 우선순위 문제를 해결할 수 있다.

int main(){
    square(42);

    //goo(10); // 모호하다.
}