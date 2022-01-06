// Upcasting 활용

#include <iostream>
using namespace std;

class Animal{
public: 
    int age;
};

class Dog : public Animal{
public:
    int color;
};

class Cat : public Animal{};

// 1. 동종(같은 부모를 가지는 클래스)을 처리하는 함수
/*
bool IsOlderThan10YearsOld(Dog* p){
    return p->age > 10;
}

bool IsOlderThan10YearsOld(Cat* p){
    return p->age > 10;
}
*/

bool IsOlderThan10YearsOld(Animal* p){
    return p->age > 10;
}

int main(){
    Dog d;
    Cat c;

    IsOlderThan10YearsOld(&d);
    IsOlderThan10YearsOld(&c);
}
