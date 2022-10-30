#include <iostream>
#include <algorithm>
using namespace std;

long long squence(int n)
{
    if(n==1){
        return 1;
    }
    if(n%2==0){
        return squence(n / 2) + 1;
    }
    else{
        return squence(3*n+1)+1;
    }
}

int main()
{
    long long n;
    cin >> n;
    cout << squence(n);

    return 0;
}