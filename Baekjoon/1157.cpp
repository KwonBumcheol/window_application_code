#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int alphabet[26] = {0,};
    int cnt = 0;

    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]<97)
            alphabet[s[i] - 65]++; // 대문자
        else
            alphabet[s[i] - 97]++; // 소문자
    }

    int tmp, max = 0;

    for(int i=0; i<26; i++){
        if(max < alphabet[i]){
            max = alphabet[i];
            tmp = i;
        }
    }

    for(int i=0; i<26; i++){
        if(max == alphabet[i])
            cnt++;
    }

    if(cnt>1)
        cout << "?" << endl;
    else
        cout << (char)(tmp+65) << endl;
    
    return 0;
}