#include <iostream>
using namespace std;

void Print_numbers(int n)
{
    if (n == 0)
        return;
    Print_numbers(n - 1);
    cout << n<<endl;
}

int main()
{
    int n;
    cin >> n;
    Print_numbers(n);

    return 0;
}