//Print 2 to N even numbers(Having one argument only)
#include<bits/stdc++.h>
using namespace std;
void even(int n){
    if(n==2){
        cout << n;
        return;
    }
    even(n - 2);
    cout << n << " ";
}
int main(){
    int n = 10;
    if(n%2==1){
        n--;
    }
    even(n);
}