#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0); // 입출력 속도 향상

    vector<int> v(8);
    vector<int> a(8);
    vector<int> d(8);

    for(int i=0; i<8; i++){
        cin >> v[i];
        a = v;
        d = v;
    }

    sort(a.begin(), a.end());
    sort(d.begin(), d.end(), greater<int>()); // greater<자료형>() - 내림차순 <-> less<자료형>() 내림차순

    if(v == a){
        cout << "ascending";
    } else if(v == d){
        cout << "descending";
    } else{
        cout << "mixed";
    }
}