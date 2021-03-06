#include <iostream>
#include <algorithm>
using namespace std;

// 함수 사용
bool cmp(int a, int b) { return a > b; }

struct Less{
    bool operator()(int a, int b) const { return a > b; }
};
template <typename T>
void foo(T calc){
    int result = calc(10, 20);
    cout << result << endl;
}

int main(){
    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    Less less;
    sort(x, x+10, &cmp);

    // 함수 객체는 쉽게 만드는 문법
    // => 람다(Lambda): 코드 블록을 참조하는 기술
    //  : C++11 문법으로 지원한다.
    //  - C++에서는 익명의 함수객체를 생성하는 기술
    // => 람다는 크롤저(Closure)를 지원한다.

    sort(x, x+10, [](int a, int b)->bool{ return a < b; });

    for(auto e : x){
        cout << e << endl;
    }

    int n = 100;
    // n을 람다 표현식에서 전달하는 것이 가능하다.
    //  => 캡쳐
    //      [n] : capture by value
    //      [&n] : capture by reference
    //      [this] : 멤버 함수 안에서 람다 표현식을 사용할 경우,
    //               다른 멤버 함수 또는 데이터에 접근이 가능하다.
    //  => 클로저: 다른 컨텍스트 변수의 참조가 가능하다.
    foo([&n](int a, int b) 
    {
        ++n;
        return a + b + n;
    }
    );
}