

#include <iostream>
using namespace std;
int flag = 0;
void print_digites(int n)
{
    if (n < 10)
    {
        cout << n % 10 << " ";
        return;
    }
    int result = n % 10;
    print_digites(n / 10);
    cout << result << " ";
    // for removing space in the first step
    // ____________
}

int main()
{
    int n, number;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        flag = 0;
        cin >> number;
        print_digites(number);
        cout << endl;
    }

    return 0;
}