#include<iostream>
using namespace std;

class stack{
    public:
    // proparties 
        int *arr;
        int size;
        int top;
    // functions
    stack(int size){
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }
    void push(int val){
        if (size-top >1)
        {
            top++;
            arr[top] = val;
        }
        else{
            cout<< "Stack overflowed"<<endl;
        }
        
    }
    void pop(void){
        if (top>=0)
        {
            top--;
        }
        else{
            cout<< "stack underflowed "<<endl;
        }
        
    }
    int peek(void){
        if (top >= 0)
        {
            return arr[top];
        }
        return -1;
        
    }
    bool isEmpty(void){
        if (top==-1)
        {
            return true;
        }
        return false;
        
    }

};

int main()
{
    stack st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.pop();
    st.pop();
    // st.pop();
    cout<<st.peek()<<endl;
    if (st.isEmpty())
    {
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    

    return 0;
}