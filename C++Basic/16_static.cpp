#include <iostream>
using namespace std;

// 멤버 데이터 변수는 공유되지 않는다.
// => 인스턴스 변수

// Car 객체가 총 몇개 생성되었는지를 확인하고 싶다.
// => 해결 방법
//    - 정적 멤버 데이터 변수

// int cnt = 0;
// 문제점: 누구나 cnt에 접근해서 값을 변경할 수 있다.

class Car{
    int color;
public:
    // Car 클래스 객체가 공유하는 데이터 변수
    static int cnt;

public:

    Car(){
        ++cnt;
    }

    ~Car(){
        --cnt;
    }
};

// Car.cpp
int Car::cnt = 0;
// 정적 멤버 데이터 변수는 반드시 클래스 외부에 선언해야 한다.

int main(){
    Car c1, c2;
    cout << Car::cnt << endl;
}