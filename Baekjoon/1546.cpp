#include <iostream>
using namespace std;

int main(){
    int N, score[100];
    int MAX = 0;
    double tmp = 0;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> score[i];
        if(MAX < score[i]){
            MAX = score[i];
        }
        tmp += score[i];
    }
    tmp = (tmp/MAX*100)/N;

    cout << fixed;
	cout.precision(6); // 소수점 2자리까지 출력

    cout << tmp << endl;

    exit(0);
}