#include <iostream>
#include <iomanip>  // setw, setfill
using namespace std;

int main(){
    int n = 42;

    cout << n << endl;
    cout << hex << n << endl;       // 2a
    cout << uppercase << n << endl; // 2A

    // printf("%4d", n);
    cout << setw(4) << endl;
    cout << setw(4) << setfill('0') << n << endl;

    cout << oct << n << endl;
    cout << dec << n << endl;
    // 한번 사용하면, 다시 변경하기까지 상태 유지된다.
}