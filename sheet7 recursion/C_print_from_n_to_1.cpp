#include <iostream>
using namespace std;
int flag = 0;
void Print_numbers(int n)
{ 
    if (n == 0)
        return;
    // for removing space in the first step    
    // ________________________________
    if (flag){
        cout<<" ";
    }
    flag=1;
    // ________________________________________________
    cout << n ;
    Print_numbers(n - 1);
}

int main()
{
    int n;
    cin >> n;
    Print_numbers(n);

    return 0;
}