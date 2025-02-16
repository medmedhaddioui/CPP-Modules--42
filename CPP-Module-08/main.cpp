#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    static string reverseWords(string s)
    {
        for (auto it = s.begin(); it != s.end(); it++)
        {
            while (it != (s.end() - 1) && (*it == ' '))
                it++;
            // size_t i = s.find_first_not_of (s, *it);
            // reverse(s.begin(), i);
        }
        return s;        
    }
};
int main ()
{   
    std::cout << Solution::reverseWords("  hello world  ") << std::endl;
}
