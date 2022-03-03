#include <vector>
#include <cmath>
#include <string>
#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    std::string s = "";
    std::vector<int> inp(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> inp[i];
    }
    int x;
    for (int i = 0; i < n ; i++)
    {
        if (i == 0) x = log2(inp[i]);
        else if (inp[i] < inp[i - 1]) x = log2(inp[i-1] - inp[i]);
        else x = log2(inp[i] - inp[i - 1]);
        x += 97;
        if (x > 122) x = 32;
        s += x;
    }
    std::cout << s;
    return 0;
}
