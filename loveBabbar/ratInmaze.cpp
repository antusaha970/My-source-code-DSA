#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
#include<set>
using namespace std;

// bool isPossible(vector<vector<int>> visited, vector<vector<int>> m, int x, int y,int n)
// {
//     if (m[x][y] == 1 && visited[x][y] == 0 && (x >= 0 && x < n) && (y >= 0 && y < n))
//     {

//         return true;
//     }
//     return false;
// }
// void solve(vector<string> &ans, vector<vector<int>> visited, vector<vector<int>> m, int n, int x, int y, string path)
// {
//     // Base case
//     if (x == n - 1 && y == n - 1)
//     {
//         ans.push_back(path);
//         return;
//     }
//     visited[x][y] = 1;

//     // Down
//     int newX = x + 1;
//     int newY = y;
//     if (isPossible(visited, m, newX, newY,n))
//     {
//         path.push_back('D');
//         solve(ans, visited, m, n, newX, newY, path);
//         path.pop_back();
//     }

//     // up
//     newX = x - 1;
//     newY = y;
//     if (isPossible(visited, m, newX, newY))
//     {
//         path.push_back('U');
//         solve(ans, visited, m, n, newX, newY, path);
//         path.pop_back();
//     }
//     // right
//     newX = x;
//     newY = y + 1;
//     if (isPossible(visited, m, newX, newY))
//     {
//         path.push_back('R');
//         solve(ans, visited, m, n, newX, newY, path);
//         path.pop_back();
//     }

//     // Left
//     newX = x;
//     newY = y - 1;
//     if (isPossible(visited, m, newX, newY))
//     {
//         path.push_back('L');
//         solve(ans, visited, m, n, newX, newY, path);
//         path.pop_back();
//     }
//     visited[x][y] = 0;
// }
// vector<string> findPath(vector<vector<int>> &m, int n)
// {
//     vector<string> ans;
//     vector<vector<int>> visited = m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             visited[i][j] = 0;
//         }
//     }
//     string path = "";
//     int srcX = 0;
//     int srcY = 0;
//     solve(ans, visited, m, n, srcX, srcY, path);
//     return ans;
// }
// }
// ;

int main()
{
   vector<int> a;
   a.insert(a.begin()+0,5);
   a.insert(a.begin()+1,6);
   a.insert(a.begin()+1,7);
   a.insert(a.begin()+3,8);
   for(auto i:a){
        cout<<i<<" ";
   }
    return 0;
}