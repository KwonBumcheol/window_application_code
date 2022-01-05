#include <iostream>
using namespace std;

// 어떤 함수가 객체를 반환할 때
// 1. 값 타입으로 반환하면 임시 객체가 생성되어서 반환한다
// 2. 참조 타입으로 반환하면 임시 객체가 생성되지 않는다.
class Point
{
public:
  int x, y;

  Point() { cout << "Point()" << endl; }
  ~Point() { cout << "~Point()" << endl; }
  Point(int a, int b) : x(a), y(b) {}
  Point(const Point &rhs)
  {
    cout << "Point(const Point&)" << endl;
  }
};

Point p(1, 2);             // 전역 객체이다.
Point foo() { return p; }  // p를 복사한 임시 객체가 생성된다.
Point &goo() { return p; } // p의 별명이 반환한다.

Point &hoo()
{
  Point x;
  return x;
  // 위의 x는 함수가 끝나면 사라지는 메모리이다.
  // 사라지는 메모리에 대한 참조를 반환하는 것은 미정의 사항이다.
}

int main()
{
  foo().x = 10;
  // 임시 객체에 값을 넣을 수 없다.
  // error: expression is not assignable

  goo().x = 10;
  // 전역 객체에 값을 넣을 수 있다.
}