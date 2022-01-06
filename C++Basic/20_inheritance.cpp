// 상속
#include <iostream>
#include <string>
using namespace std;

#if 0
class Student{
private:
    string name;
    int age;
    int id;
};

class Professor{
private:
    string name;
    int age;
    int major;
};
#endif
// 상속 문법을 이용하면 공통의 속성을 관리하는 것이 편리하다.
//  > 공통의 속성을 가진 타입을 설계한다.

// Base / Super 클래스라고 한다.
class User{
private:
    string name;
    int age;
};

// Derived / Sub 클래스라고 부른다.
class Student : public User{
private:
    int id;
};

class Professor : public User{
private:
    int major;
};