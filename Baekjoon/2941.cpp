#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> C_alpha = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int n;
    string str;

    cin >> str;

    for(int i=0; i<C_alpha.size(); i++){
        while(1){
            n = str.find(C_alpha[i]);
            if(n == string::npos)
                break;
            str.replace(n, C_alpha[i].length(), "#"); // 치환
        }
    }
    cout << str.length();
}