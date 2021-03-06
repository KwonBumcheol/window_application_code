// 1) 이름 충돌을 해결할 수 있다.
// 2) 프로그램의 각 요소를 관련된 요소까지 그룹화 할 수 있다.
// 3) C++ 표준에서 제공하는 모든 요소들은 std의 이름공간 안에 존재한다.
#include <iostream>

namespace Audio
{
    void init(){ std::cout << "Audio::init" << std::endl; }
}

namespace Video
{
    void init(){ std::cout << "Video::init" << std::endl; }
} // namespace Video

void init()
{
    std::cout << "Global init" << std::endl;
}

int main(){
    Audio::init();
    Video::init();

    init();
}
