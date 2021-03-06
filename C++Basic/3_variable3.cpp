#include <iostream>
using namespace std;

// int a;    => int
// int x[10] => int[10]
// int y[3]  => int[3]

// C++ / C++ 함수는 배열을 인자로 전달받을 때
// decay(부식)를 수행합니다.
// : 배열의 첫번째 원소의 시작 주소가 전달된다.
// > 배열을 전달받는 함수는 반드시 길이에 대한 추가정보를 인자를 통해 전달해야 한다.
void foo(int *x, int n){
    for(int i=0; i<n; i++){
        cout << x[i] << endl;
    }
}

// int z[3][5];
// > [ int [5] ][ int[5] ][ int[5] ]

//int* p[5]; > 포인터 배열(40바이트) - [int*][int*][int*][int*][int*]
//int (*p)[5]; > 배열 포인터 -(8바이트)


void goo(int (*p)[5]){

}

/*
int main(){
    int z[3][5];
    // z의 타입: int[3][5]
    goo(z);

    int y[3] = {1,2,3};
    foo(y, 3);

    auto a = y[0];
    auto p = &y[0];
    // auto를 사용하면 우항의 타입과 동일한 타입으로 컴파일 타임에 결정된다.

    auto xx;
    // 반드시 우항이 필요하다.

    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    foo(x, 10);
}
*/

// typedef
// : 기존 타입의 별칭을 만들어서 사용할 수 있음.
// > 복잡한 타입을 간결하게 사용할 수 있다.
// x: [int[3]][int[3]]

void hoo(int (*p)[3]){

}

typedef int (*POINTER)[3];
void goo(POINTER p){

}

// C++11에서는 typedef 말고, using을 통해서 타입의 별칭을 만들 수 있다.
// 1) 가동성이 좋다.
// 2) typedef는 '템플릿'의 문법에서는 사용할 수 없다.
using POINTER2 = int (*)[3];
void xoo(POINTER2 p){

}

int main(){
    int x[2][3];
    hoo(x);
    goo(x);
    xoo(x);
}