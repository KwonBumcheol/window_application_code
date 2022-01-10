#include <iostream>
using namespace std;

class Sample{
    int data;

public:
    void f1(){ cout << "f1" << endl; } // void f1(Sample* const this)
    int f2(){ // void f2(Sample* const this)
        cout << "f2" << endl;
        return 0;
    }

    // C++ idioms
    // - C++에서 자주 사용되는 코드 기법.
    int call_f3(){ // int call_f3(Sample* const this)

        // this에 대해서 null 체크를 수행하는 것은
        // 표준에서 권장하지 않는다.
        // => 정적 멤버 함수를 통해 동일한 코드를 작성해
        //    주어야 한다.

        if(this){
            return f3(); // this->f3();
        }

        return 0;
    }
    
    static int call_f3(Sample* const self){
        if(self){
            return self->f3();
        }
        return 0;
    }

protected:
    int f3(){ 
        cout << "f3" << endl;
        return data; // return this->data
    }
};

int main(){
    Sample* p = nullptr; // 메모리 할당 실패로 인해 nullptr이다.

    p->f1(); // Sample::f1(nullptr)
    p->f2();
    // p->f3();
    p->call_f3(); // Sample::call_f3(p);

    Sample::call_f3(p);
}