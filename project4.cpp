#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        priority_queue<int, vector<int>, greater<int>> que;
        int result = 0, len, tmp;
        cin >> len;
        for (int j = 0; j < len; j++) {
            cin >> tmp;
            que.push(tmp);
        }
        while (que.size() > 1) {
            tmp = que.top();
            que.pop();
            tmp += que.top();
            que.pop();
            result += tmp;
            que.push(tmp);
        }
        cout << result << '\n';
    }
}