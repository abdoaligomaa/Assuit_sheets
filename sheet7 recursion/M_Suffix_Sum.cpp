#include <iostream>
#include <algorithm>
using namespace std;

long long Sum(int arr[], int len,int m,int index)
{
    if(index==m){
        return arr[len-1];
    }
    return Sum(arr,len-1,m,++index)+arr[len-1];
}

int main()
{
    int n,m;
    cin>>n>>m;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<Sum(array,n,m,1);
    

    return 0;
}