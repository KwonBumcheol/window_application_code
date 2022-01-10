#include <iostream>
using namespace std;

// 테스트를 목적으로 만든 코드이다.
class A{
    int a;
public:
    virtual void foo() { cout << "foo" << endl; }
};

// 상속 관계가 아니다.
class B{
    int b;
public:
    virtual void goo() { cout << "goo" << endl; }
};

int main(){
    A aaa;
    B* p = reinterpret_cast<B *>(&aaa);

    p->goo();
}