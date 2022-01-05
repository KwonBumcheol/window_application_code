#include <iostream>
using namespace std;

template <class T>
class Stack{
private:
    T *buff;
    int idx;
public:
    Stack(int sz = 10){
        idx = 0;
        buff = new T[sz]; 
    }

    void push(const T &v){
        buff[idx++] = v;
    }

    int pop(){
        return buff[--idx];
    }

    ~Stack(){
        delete[] buff;
    }

};

struct Complex{

};

Stack<Complex> s4;

// 클래스 템플릿은 탑이 추론이 불가능하다.
// => 명시적으로 타입을 지정해주어야 한다.
Stack<int> s1; // T -> int
int main(){
    Stack<long> s2(100); // T - >long
    Stack<double> s3(100); // T -> double
    
    s1.push(10);
    s2.push(20);

    cout << s1.pop() << endl;
    cout << s2.pop() << endl;
}