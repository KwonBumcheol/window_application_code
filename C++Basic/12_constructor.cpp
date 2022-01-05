#include <iostream>
using namespace std;

// 생성자
//  - 객체가 생성되면 초기화를 위해 자동으로 호출되는 함수
//  - 클래스 이름과 동일하고, 반환타입을 표기하지 않는다.
//  - 생성자 오버로딩이 가능하다.
//  > 다른 타입의 파라미터를 가지는 생성자를 여러개 제공하는 것이 가능하다.
//  - 사용자가 만들지 않으면, 컴파일러 인자가 없는 생성자를 하나 제공한다.
//  => 기본 생성자(default constructor)

// 상태
//  => 멤버 데이터 변수
//  행위: 멤버 함수 / 메소드
//  => 멤버 데이터 변수를 조작하는 다양한 함수를 제공한다.

class Point{
private:
    int x;
    int y;
public:
    Point(){
        cout << "Point()" << endl;
        x = 0;
        y = 0;
    }
    Point(int a, int b){
        cout << "Point(int, int)" << endl;
        x = a;
        y = b;
    }

    ~Point(){
        cout << "~Point()" << endl;
    }
};

// malloc vs new
// => 객체를 힙에 생성할 때, new는 생성자가 호출되지만, malloc은 생성자가 호출되지 않는다.

/*
int main(){
    // Point *p2 = static_cast<Point *>malloc(siezeof((Point)));
    // free(p2);

    // Point *p1 = new Point; //C++
    // delete p1;

    // Point x[3];
    // 기본자가 없는 경우 반드시 명시적인 초기화를 해야한다.

    Point x[2] = {Point(10, 20), Point(20, 300)};

    // Point p1;
    // Point p2(10, 20);
    // Point p3(10) // 컴파일 오류
}
*/

// 멤버의 생성자가 먼저 호출되고, 자신의 생성자가 호출된다.
class Rect{
private:
    Point p1;
    Point p2;
public:
    Rect(){cout << "Rect()" << endl;}
    ~Rect(){cout << "~Rect()" << endl;}
};

int main(){
    Rect r;
}