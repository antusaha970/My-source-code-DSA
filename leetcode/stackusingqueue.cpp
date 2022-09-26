#include<iostream>
#include<queue>
using namespace std;


class MyStack {
public:
    int size = -1;
    queue<int> q1;
    queue<int> q2;
    MyStack() {
    }
    
    void push(int x) {
        q2.push(x);
        size++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        int val = q1.front();
        size--;
        q1.pop();
        return val;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        cout<<size<<endl;
        if(size==-1)
            return true;
        
        return false;
    }
};





void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
  

int main()
{
    MyStack st;
    cout<<"is empty "<<st.empty()<<endl;
    st.push(1);
    st.push(2);
    cout<<"is empty "<<st.empty()<<endl;

    st.push(3);
    st.pop();
    st.pop();
    st.pop();
    cout<<"is empty "<<st.empty()<<endl;

    
    return 0;
}