#include <iostream>
using namespace std;
int matrix[4][4] = {
//   0  1  2  3
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 1},
    {1, 0, 1, 0},
};
int visited[4] = {0, 0, 0, 0};



void DFS(int vertex)
{
    cout<<vertex<<" ";
    visited[vertex] =  1;
    for (int i = 0; i < 4; i++)
    {
        if(matrix[vertex][i]==1 && !visited[i]){
            DFS(i);
        }
    }
}

int main()
{
    DFS(0);
    return 0;
}