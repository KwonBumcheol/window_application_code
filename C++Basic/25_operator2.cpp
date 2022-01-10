#include <iostream>
using namespace std;

class Point{
private:   
    int x;
    int y;

public:
    Point(int a, int b) : x(a), y(b) { 

    }

    // 일반 함수
    friend Point operator+(const Point& lhs, const Point& rhs){
        return Point(lhs.x + rhs.x, lhs.y + rhs.y);
    }

    void Print() const {
        cout << x << ", " << y << endl;
    }
};

// * 연산의 결과로 내부 멤버 데이터의 변경이 발생한다.
// => 멤버 함수
// * 연산의 결과로 멤버 데이터의 변경이 없다.
// => 일반 함수

int main(){
    Point p1(10, 10);
    Point p2(20, 20);

    Point p3 = p1 + p2;
    p3.Print();
    // p1.operator+(p2);
    // operator+(p1, p2)
}