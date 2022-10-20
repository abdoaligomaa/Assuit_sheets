#include <iostream>
using namespace std;
int flag = 0;
void print_digites(int n)
{
    if (n == 0)
        return;
    int result = n % 10;
    print_digites(n / 10);
    // for removing space in the first step
    // ________________________________
    if (flag)
    {
        cout << " ";
    }
    flag = 1;
    // ________________________________________________
    cout << result;
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