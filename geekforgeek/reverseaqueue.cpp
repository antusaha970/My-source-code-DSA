#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> stk;
    queue<int> que;
    while (!q.empty())
    {
        int tmp = q.front();
        stk.push(tmp);
        q.pop();
    }
    while (!stk.empty())
    {
        int tmp = stk.top();
        que.push(tmp);
        stk.pop();
    }

    return que;
}

int main()
{
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(23);
    a.pop();
    cout << a.front();
    return 0;
}