#include <iostream>
using namespace std;
/*
// Stack을 만들어보자.
// - 우선순위 큐
//   : 스택 - LIFO
//     큐   - FIFO
// 1. 전역 변수 / 함수를 이용한 스택
int buff[10];
int idx = 0;

// push
void push(int v){
    buff[idx++] = v;
}
// pop

int pop(){
    return buff[--idx];
}

int main(){
    push(10);
    push(20);

    cout << pop() << endl;
    cout << pop() << endl;
}
*/

/*
// 2. Stack 타입을 설계해보자
struct Stack{
    int buff[10];
    int idx;
};

void push(Stack *s, int v){
    s->buff[(s->idx)++] = v;
}

int pop(Stack *s){
    return s->buff[--(s->idx)];
}

Stack s1;
int main(){
    Stack s2;

    s1.idx = 0;
    s2.idx = 0;
    
    push(&s1, 10);
    push(&s2, 20);

    cout << pop(&s1) << endl;
    cout << pop(&s2) << endl;
}
*/

// 3. 상태를 나타내는 데이터와 상태를 조작하는 함수를 묶자.
// 4. 구조체 내무의 데이터를 외부에서 함부로 조작할 수 없도록
//    정보 은닉이 필요하다.
//    => 접근 지정자
//    구조체는 접근 지정자를 사용하지 않을 경우,
//    기본적으로 public이 됩니다.
//    => class
//       기본 접근 지정이 private
// 5. 생성자 함수를 도입한다.
//   생성자(Constrcutor)
//    - 함수 이름이 클래스 이름과 동일하고, 반환 탕입을 표기하지 않는다.

/*
class Stack{
// private:
    // 멤버 변수(데이터)
    int buff[10];
    int idx;
public:
    // 멤버 함수
    // - 멤버 데이터에 접근하는 함수
    // > 명시적인 함수 인자로 Stack*을 받을 필요가 없다.

    Stack(){
        cout << "Stack()" << endl;
        idx = 0;
    }

    void init(){
        idx = 0;
    }

    void push(int v){
        buff[idx++] = v;
    }

    int pop(){
        return buff[--idx];
    }

};

Stack s1;
int main(){
    Stack s2;
    // 초기화가 필요함.
    // s1.idx = 0;
    // s1.init();
    // s2.idx = 0;
    // s2.init();
    
    s1.push(10);
    s2.push(20);

    // s1.idx = 10;

    cout << s1.pop() << endl;
    cout << s2.pop() << endl;
}
*/

// 6. 사용자가 스택의 크기를 결정할 수 있도록 한다.
// > 생성자는 인자를 가져도 되고, 인자를 가지지 않아도 된다.
//   생성자는 오버로딩이 가능하다.
// 7. 더이상 객체를 사용하지 않을 때,
//    객체가 파괴되는 시점에서 호출되는 함수가 있다.
//    > 소멸자(Destrcutor)
//    - 함수 이름은 -클래스이름() 이다.
//    - 반환 타입을 표기하지 않는다.
//    - 인자를 가질 수 없습니다.
//    - 객체가 파괴되는 시점에 수행한다.

class Stack{
// private:
    int *buff;
    int idx;
public:
    // Stack s1;
    /*
    Stack(){
        cout << "Stack()" << endl;
        idx = 0;
    }
    */
    
    // Stack s2{10};
    // Stack s2(10);
    // Stack s1;
    Stack(int sz = 10){
        idx = 0;
        buff = new int[sz]; 
        // 사용자가 전달한 크기 만큼 버퍼를 할당한다.
    }

    void push(int v){
        buff[idx++] = v;
    }

    int pop(){
        return buff[--idx];
    }

    ~Stack(){
        delete[] buff;
    }

};

Stack s1;
int main(){
    Stack s2(100);
    Stack s3(100);
    
    s1.push(10);
    s2.push(20);

    cout << s1.pop() << endl;
    cout << s2.pop() << endl;
}