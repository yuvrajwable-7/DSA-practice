//Print 2 to N even numbers
#include<bits/stdc++.h>
using namespace std;
void even(int num,int n){
    if(num==n){
        cout << num;
        return;
    }
    cout << num << endl;
    even(num + 2, n);
}
int main(){
    int n = 10;
    if(n%2==1){
        n--;
    }
    even(2,n);
}