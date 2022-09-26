#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMovesToSeat(vector<int> &seats, vector<int> &students)
{
    // frist we will sort the arrays
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    // then we will set size hance thare size is seats==students
    int size = seats.size();
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        // if seat[i] is bigger or equal to 
        if (seats[i] >= students[i])
        {
            int tmp = seats[i] - students[i];
            sum += tmp;
        }
        // if students is bigger
        else
        {
            int tmp = students[i] - seats[i];
            sum += tmp;
        }
    }
    // return sum
    return sum;
}

int main()
{

    return 0;
}