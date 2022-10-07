#include <iostream>
#include <queue>
using namespace std;

int findTheWinner(int n, int k)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    // simulation part
    while(q.size()!=1){
        for(int i = 1;i<k;i++){
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        q.pop();
    }
    return q.front();
}

int main()
{
    queue<int> q;
    for (int i = 1; i <= 1; i++)
    {
        q.push(i);
    }
    cout<<q.size();

    return 0;
}