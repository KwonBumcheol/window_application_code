// a.c
int global = 10;
static int internal = 20;

// b.c
// extern int global;

// external linkage: extern - 다른 파일에서 전역 변수에 접근이 가능하다.
// internal linkage: static - 다른 파일에서 전역 변수에 접근이 불가능하다.
// - 전역 변수 앞에 붙이는 static은 "통영 범위 지정자" 라고 부른다.

int main(){
    int n1 = 0;
    static int n2 = 0;
    // static: 기억 부류 지정자
    //  => auto는 스택에 저장하지만, static은 데이터 영역에 저장한다.
}