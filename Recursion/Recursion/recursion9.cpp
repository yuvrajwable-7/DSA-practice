//Sum of square N numbers
#include<bits/stdc++.h>
using namespace std;
int printSum(int n){
    if(n==1){
        return 1;
    }
    return n * n + printSum(n-1);
}
int main(){
    int n;
    cin >> n;
    cout<<printSum(n);
    return 0;
}