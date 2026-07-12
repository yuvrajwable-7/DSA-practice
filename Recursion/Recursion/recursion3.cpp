//Print N to 2 even numbers
#include<bits/stdc++.h>
using namespace std;
void even(int n){
    if(n==2){
        cout << n << endl;
        return;
    }
    cout << n << endl;
    even(n - 2);
}
int main(){
    int n = 10;
    even(n);
}