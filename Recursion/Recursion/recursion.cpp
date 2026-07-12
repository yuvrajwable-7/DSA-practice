#include<bits/stdc++.h>
using namespace std;
void func3(int n){
    if(n==0){
        cout << "Happy birthday";
        return;
    }
    cout << n << " days left for the birthday" << endl;
    func3(n - 1);
}
int main(){
    int n = 3;
    func3(3);
}