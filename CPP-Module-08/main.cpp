#include <iostream>
#include <bits/stdc++.h>

int main ()
{
    std::vector<int> a;
    a.push_back(5);
    a.push_back(9);
    a.push_back(51);
    a.push_back(51);
    for (std::vector<int>::iterator b = a.begin(); b != a.end(); b++)
        std::cout << *b << std::endl;
    
}