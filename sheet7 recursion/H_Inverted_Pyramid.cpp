#include <iostream>
using namespace std;
// int counter = 0;
void print_row(int row, int n)
{

    // base case
    if (row == 0)
    {
        return;
    }


    // print the spaces before the row
    for (size_t i = 0; i < n - row; i++)
    {
        cout << " ";
    }
    for (size_t i = 0; i < 2 * (row - 1) + 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    print_row(row - 1, n);
}

int main()
{
    int n;
    cin >> n;
    print_row(n, n);

    return 0;
}