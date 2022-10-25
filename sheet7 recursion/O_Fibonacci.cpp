#include <iostream>
#include <algorithm>
using namespace std;

long long fabonaccia(int n)
{
    if(n==1)
        return 0;
    if (n == 2)
        return 1;
    return fabonaccia(n - 1) + fabonaccia(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout<<fabonaccia(n);
    
    return 0;
}