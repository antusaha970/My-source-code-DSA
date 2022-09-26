#include<iostream>
#include<queue>
using namespace std;

void BFS_Traversal(int matrix[][7]){
    // BFS implementation
    queue<int> q;
    int node;
    int i = 1;
    int visited[7] = {0,0,0,0,0,0,0};
    visited[i] = 1;
    cout<<i<<" ";
    q.push(i);
    while (!q.empty())
    {
        node  = q.front();
        q.pop();
        for (int j = 0; j < 7; j++)
        {
            if(matrix[node][j] == 1 && visited[j] == 0){
                visited[j] = 1;
                cout<<j<<" ";
                q.push(j);
            }
        }
        
    }
}

int main()
{
    // Graph Initializing 
    int matrix[7][7] = {
        //  0 1 2 3 4 5 6
           {0,1,1,1,0,0,0}, // 0
           {1,0,1,0,0,0,0}, // 1
           {1,0,0,1,1,0,0}, // 2
           {1,0,1,0,1,0,0}, // 3
           {0,0,1,1,0,1,1}, // 4
           {0,0,0,0,1,0,0}, // 5
           {0,0,0,0,1,0,0}, // 6
    };
    BFS_Traversal(matrix);
    


    
    return 0;
}