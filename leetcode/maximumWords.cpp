#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int mostWordsFound(vector<string> &sentences)
{
    int ans = INT_MIN, counter;
    for (int i = 0; i < sentences.size(); i++)
    {
        counter = 1;
        string tmp = sentences[i];
        for (int i = 0; i < tmp.size(); i++)
        {
            if (tmp[i] == ' ')
            {
                counter++;
            }
        }
        ans = max(counter, ans);
    }
    return ans;
}

int main()
{

    return 0;
}