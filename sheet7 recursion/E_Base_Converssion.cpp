#include <iostream>
using namespace std;
int flag = 0;
void convert_dicimal_to_binary(int n)
{
    if (n == 0)
        return;
    int result = n % 2;
    convert_dicimal_to_binary(n / 2);
    
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
        convert_dicimal_to_binary(number);
        cout << endl;
    }

    return 0;
}