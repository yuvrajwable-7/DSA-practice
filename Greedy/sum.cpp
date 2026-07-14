#include<iostream>
using namespace std;
int sum(int v){
    if(v==0){
        return 0;
    }
    return v + sum(v - 1);
}
int main(){
    int x;
    cout << "Enter the number:";
    cout << endl;
    cin >> x;
    int ans = sum(x);
    cout << "The sum of first " << x << " number is " << ans;

    return 0;
}