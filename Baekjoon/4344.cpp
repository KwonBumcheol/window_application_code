#include <iostream>
using namespace std;

int main(){
    int c; // 테스트 케이스
    int N; // 학생 수
    int num;
    int avg;
    int score[100] = {0,};
    double tmp;

    cin >> c;

    for(int i=0; i<c; i++){
        avg = 0;
        num = 0;
        cin >> N;

        for(int j=0; j<N; j++){
            cin >> score[j];
            avg += score[j];
        }
        avg = avg/N;
        for(int j=0; j<N; j++){
            if(score[j] > avg)
                num++;
        }
        tmp = (double)num/N*100;

        cout << fixed;
        cout.precision(3);
        cout << tmp << "%" << endl;
    }
}