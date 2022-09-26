#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    // sorting the array 
    sort(deck.begin(),deck.end());
    // make vector for ans 
    vector<int> ans(deck.size());
    int size = deck.size();
    queue<int>q;
    // put number of elements in queue 
    for (int i = 0; i < size; i++)
    {
        q.push(i);
    }
    for (int i = 0; i < size; i++)
    {
        // put top element to ans 
        ans[q.front()] = deck[i];
        q.pop();
        // the push second element to bottom of the line 
        q.push(q.front());
        q.pop();
    }
    return ans;
    // For best understanding DRY run this code by your own 
}

int main()
{
    vector<int> ans(3);
    ans[1] = 2;
    cout<<ans.at(0);
    
    return 0;
}