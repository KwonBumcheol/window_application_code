#include <iostream>
#include <string>
using namespace std;

struct User{
    std::string name;
    int age;
};

// 복사에 의한 오버헤드를 없앨 수 있다.
// => call by value
//   : 함수를 통해서 전달받은 파라미터의 값을 변경하지 않는다.
//     void printUser(User user)
//     문제점: 구조체 등의 크기가 큰 타입이 전달될 경우 복사에 의한 오버헤드가 있다.

// 해결
// => call by reference
// => call by printUser(User &user)
//    : 복사에 의한 오버헤드를 없앨 수 았다.
//    함수에서 마라미터의 값을 변경하지 않아야 한다.
// const &를 사용해야 한다.
// => void printUser(const User &user) 
void printUser(User user){
    cout << user.name << ", " << user.age << endl;

    // user.age += 10; // compile error!
}

int main(){
    User user{"Tom", 42};
    printUser(user);
}