#include <iostream>
#include <algorithm>
using namespace std;

long long log(int n)
{
    if(n==2){
        return 1;
    }
    if (n <2)
    {
        return 0;
    }
    return log(n/2)+1;
}

int main()
{
    long long n;
    cin >> n;
    cout << log(n);

    return 0;
}