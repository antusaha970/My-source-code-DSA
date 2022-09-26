#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) 
{
    stack<int> stk;
    for (int i = 1; i <= k; i++)
    {
        int tmp = q.front();
        stk.push(tmp);
        q.pop();
    }

    while (!stk.empty())
    {
        int tmp = stk.top();
        q.push(tmp);
        stk.pop();
    }
    int N = q.size()-k;

    for (int i = 1; i <= N; i++)
    {
        int tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    return q;
    

    
    

}

int main()
{
    
    return 0;
}