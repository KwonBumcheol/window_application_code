#include <iostream>
using namespace std;

// 1. 정적 멤버 변수 / 정적 멤버 함수는 객체르 생성하지 않아도 호출하거나 접근이 가능하다.
// => 정적 멤버 함수에서는 오직 정적 멤버 데이터만 접근이 가능하다.

class Sample{
    // int data;
    int data = 42; // C++11 부터 허용
    
    static int cnt;
    // 외부 정의가 필요하다. -> int Sample::cnt = 0;

    static const int data2 = 100;
    // 상수 정적 멤버 데이터는 클래스 내부에서 초기화를 허용한다.

public:
    // Sample() : data(42) {}
    
    static void foo(){
        // data = 0; - error!
        cnt = 0;
    }
};

int Sample::cnt = 0;

int main(){

}