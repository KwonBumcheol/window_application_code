#if 0
#include <iostream>
using namespace std;

// endl은 함수이다.

ostream& xendl(ostream& os){
    os << '\n';
    return os;
}

int main(){
    cout << endl;
    endl(cout);

    cout << xendl;
    xendl(cout);
}
#endif

#if 0
#include <stdio.h>

namespace std
{
    class ostream{
    public:
        ostream& operator<<(int n){
            printf("%d", n);
            return *this;
        }

        ostream& operator<<(const char* s){
            printf("%s", s);
            return *this;
        }

        ostream& operator<<(double d){
            printf("%lf", d);
            return *this;
        }
        // ------

        ostream& operator<<(char c){
            printf("%c", c);
            return *this;
        }

        ostream& operator<<(ostream& (*f)(ostream&)){
            f(*this);
            return *this;
        }       
    };

    // 조직자(iomanipulator) 함수
    ostream& endl(ostream& os){
        os << '\n';
        return os;
    }

    // 사용자가 endl에 대한 도구를 쉽게 만들어서,

    ostream cout;
} // std
#endif

#include <iostream>

std::ostream& tap(std::ostream& os){
    return os << '\t';
}

std::ostream& menu(std::ostream& os){
    return os << "1. 짜장면" << std::endl
              << "2. 짬뽕" << std::endl
              << "3. 비빔밥" << std::endl;
}

int main(){
    std::cout << tap << 42 << std::endl;
    // std::cout.operator<<(std::endl)

    std::cout << menu;
}