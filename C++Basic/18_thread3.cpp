// C++11부터 스레드를 표준 라이브러리를 통해 지원한다.
#include <iostream>
#include <thread>

#if 0
void foo(){
    std::cout << "foo" << std::endl;
}

int main(){
    std::cout << "main thread" << std::endl;
    std::thread t1(&foo);

    t1.join();
}
#endif

void thread_routine(const char* name){
    std::cout << name << std::endl;
}

int main(){
    std::thread t1(&thread_routine, "A");
    std::thread t2(&thread_routine, "B");

    t1.join();
    t2.join();
}