#include <iostream>
#include <string>
using namespace std;

class Queue{
public:
    int queue[10000];
    int begin, end;

    Queue(){ begin = 0; end = 0; }

    void push(int num){
        queue[end] = num;
        end += 1;
    }

    int pop(){
        if(empty()){
            return -1;
        } else {
            begin += 1;
            return queue[begin-1];
        }
    }

    int size(){
        return end - begin;
    }

    bool empty(){
        return (size() == 0) ? 1 : 0;
    }

    int front(){
        if(empty())
            return -1;
        else
            return queue[begin];
    }

    int back(){
        if(empty())
            return -1;
        else
            return queue[end-1];
    }
};

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    Queue q;

    while(n--){
        string cmd;
        cin >> cmd;

        if(cmd == "push"){
            int num;
            cin >> num;
            q.push(num);
        } else if(cmd == "pop"){
            cout << q.pop() << endl;
        } else if(cmd == "size"){
            cout << q.size() << endl;
        } else if(cmd == "empty"){
            cout << q.empty() << endl;
        } else if(cmd == "front"){
            cout << q.front() << endl;
        } else if(cmd == "back"){
            cout << q.back() << endl;
        }
    }
    
    return 0;
}