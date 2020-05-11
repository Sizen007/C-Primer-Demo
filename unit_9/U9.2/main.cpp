#include <iostream>
#include <string>

void strcount(const std::string &s);

int main()
{
    std::string s;
    while(getline(std::cin, s))
        strcount(s);
    return 0;
}

void strcount(const std::string &s)
{
    static int total = 0;
    int len = 0;
    for(int i = 0 ; i < (int)s.length() ; ++i)
        len += s[i] == ' ' ? 0 : 1;
    std::cout << len << std::endl;
    total += len;
    std::cout << "Total: " << total << std::endl;
}
