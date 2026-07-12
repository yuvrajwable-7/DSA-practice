#include<bits/stdc++.h>
using namespace std;
void num(int n){
    if(n==1){
        cout << n << endl;
        return;
    }
    cout << n << endl;
    num(n - 1);
}
int main(){
    int n = 5;
    num(n);
}