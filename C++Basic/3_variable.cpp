// > C++ 변수의 특징

#include <iostream>
using namespace std;

/*
int main(){
    int n1 = 0xfa;
    //       11111010
    // > C++11 부터는 2진수 표기가 가능하다.
    //   C++11 부터는 자릿수 표기도 가능하다. - '
    //   1,000,000
    int n2 = 0b1111'1010;

    cout << n1 << ", " << n2 << endl;

    int n3 = 100;
    // C언어에서는 허용되지 않는 경우가 많다.
    // C++에서는 어떤 위치에서든 변수를 정의할 수 있다.
}
*/

// 구조채(struct)
// > 사용자 정의 타입을 만들때 사용

struct Point{
    // C++11부터는 구조체를 만들 때, 초기값 지정이 가능하다.
    int x = 10;
    int y = 20;
};

int main(){
    // 구조체 변수
    struct Point p1; // C언어
    Point p2;
    // C++에서는 struct를 붙이지 않아도 된다.
    cout << p1.x << ", " << p1.y << endl;
}

// g++  1.cpp -std=c++11 / -std=c++14
// clang++ 1.cpp -std=c++11 / c++14