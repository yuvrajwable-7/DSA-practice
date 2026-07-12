//Fibonacci series (fibonacci of a number is sum of previous 2 number)
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cin >> n;
    cout<<fib(n);
    return 0;
}