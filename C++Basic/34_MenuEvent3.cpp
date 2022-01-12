// > 이벤트를 처리하는 방법(설계)

#include <iostream>
#include <string>
using namespace std;

// 2. 함수 포인터 기반의 이벤트 처리 방법
//  > 자바를 제외한 모든 플랫폼에서 사용한다.
//  iOS(Target-Action) / C# Delegate / MFC MessageMap ...
//  > 핸들러 기반 이벤트 처리 방법이라고 한다.
//  : 일반 함수와 멤버 함수를 묶어서 관리할 수 있는
//    범용 함수 포인터 개념을 제공한다.
class Dialog{
public:
    void Open() {cout << "Dialog Open" << endl;}
    void Close() {cout << "Dialog Close" << endl;}
};

// 문제점
// 1. Dialog 멤버 함수만 사용할 수 있다.
// 2. 일반 함수도 사용할 수 없다.

class MenuItem{
    std::string title;

    // 멤버 함수 포인터
    // void (Dialog::*handler)() = nullptr;
    // Dialog* object = nullptr;
    void (Dialog::*handler)();
    Dialog* object;

public:
    void SetHandler(void (Dialog::*h)(), Dialog* obj){
        handler = h;
        object = obj;
    }

    MenuItem(const std::string& s) : title(s), handler(nullptr), object(nullptr){

    }

    virtual void Commend(){
        cout << title << "메뉴가 선택됨" << endl;

        if(object == nullptr || handler == nullptr)
            return;
        
        (object->*handler)();
    }
};

int main(){
#if 0
    Dialog dlg;
    Dialog* p = &dlg;

    void (Dialog::*fp)() = &Dialog::Open;
    fp = &Dialog::Close;

    (dlg.*fp)();
    (p->*fp)();
#endif
    Dialog dlg;

    MenuItem m1("저장");
    MenuItem m2("불러오기");

    m1.SetHandler(&Dialog::Open, &dlg);
    m2.SetHandler(&Dialog::Close, &dlg);

    m1.Commend();
    m2.Commend();
}