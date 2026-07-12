//Check whether a string is palindrone
#include<bits/stdc++.h>
using namespace std;
bool checkPal(string name,int str,int ed){
    if(str>=ed){
        return 1;
    }
    if(name[str]!=name[ed]){
        return 0;
    }
    return checkPal(name, str + 1, ed - 1);
}
int main(){
    string name="naman";
    cout << checkPal(name,0,4);
    return 0;
}