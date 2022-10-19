#include<iostream>
using namespace std;

void Print_recursion(int n){
    if(n==0) return;
    cout << "I love Recursion"<<endl;
    Print_recursion(n-1);
}

int main(){
    int n;
    cin>>n;
    Print_recursion(n);

    return 0;
}