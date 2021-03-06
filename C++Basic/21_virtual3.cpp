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

#include <vector>

/*
int main(){
    vector<Dog*> v1; // Dog 타입만 보관할 수 있다.

    Dog d;
    Cat c;

    // 2. 동종을 보관하는 컨테이너
    vector<Animal*> v2; // Animal의 모든 파생 클래스 타입도 보관이 가능하다.

    v2.push_back(&d);
    v2.push_back(&c);

    IsOlderThan10YearsOld(&d);
    IsOlderThan10YearsOld(&c);
}
*/

// 폴더 안에는 파일도 있고 폴더도 있다.
// > 파일과 폴더의 공통의 부모가 존재하면, 우리는 하나의 컨테이너를 통해
//   관리하는 것이 가능하다.
class Item{};

class File : public Item{};

// 자신의 부모를 포함하는 형태
//  => 재귀적 합성 설계 방법
class Folder : public Item{
    vector<Item*> v;
};