#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class MyQueue
{
private:
    stack<int> stk1;
    stack<int> stk2;

public:
    MyQueue()
    {
    }
    void passtheelement(stack<int> stk2, stack<int> stk1)
    {
        while (!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
    }

    void push(int x)
    {
        stk2.push(x);
    }

    int pop()
    {
        if (stk1.empty())
        {
            passtheelement(stk2,stk1);
        }
        int val = stk1.top();
        stk1.pop();
        return val;
    }

    int peek()
    {
        if (stk1.empty())
        {
            passtheelement(stk2,stk1);
        }
        return stk1.top();
    }

    bool empty()
    {
        if (stk1.empty() && stk2.empty())
            return true;
        return false;
    }
};

int main()
{
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "poping " << q.pop() << endl;
    cout << "peek function: " << q.peek() << endl;
    cout << "poping " << q.pop() << endl;
    cout << "peek function: " << q.peek() << endl;

    // q.push(2);
    // q.push(3);
    // cout<<"peek function: "<<q.peek()<<endl;
    // cout<<"Pop function: "<<q.pop()<<endl;
    // cout<<"peek function: "<<q.peek()<<endl;
    // cout<<"Pop function: "<<q.pop()<<endl;
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // // reverse(s,s);
    // cout<<s.top()<<endl;
    return 0;
}