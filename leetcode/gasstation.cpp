#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    // Frist we will make variable for dificit balance and starting index 
    int dificit = 0;
    int balance = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        balance += gas[i] - cost[i];
        // if balance is less then zero circul is not possiable so we will move our start 
        if (balance<0)
        {
            dificit += balance;
            start = i+1;
            balance = 0;
        }
    }
    // if dificit and balance is biggar or equal to 0 then circul is posssiable 
    if(dificit+balance>=0)
        return start;
    return -1;
    
}

int main()
{

    return 0;
}