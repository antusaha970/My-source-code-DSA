#include <iostream>
#include<string>
using namespace std;

//  s = "abbaca"
string removeDuplicates(string s)
{
   int start = 0;
   int end = s.size()-1;
   while (end!=0)
   {
     if (s[start]==s[end])
     {
        s.erase(s.begin()+start);
        s.erase(s.begin()+end);

     }
     start++;
     end--;
   }
   cout<<s;

}

int main()
{
    string j = "abbaca";
    removeDuplicates(j);
    return 0;
}