//LoweCase to upperCase
#include<bits/stdc++.h>
using namespace std;
void toUpper(string &s,int index){
    if(index==-1){
        return;
    }
    s[index] = 'A' + s[index] - 'a';
    toUpper(s, index - 1);
}
int main(){
    string s="yuvraj";
    toUpper(s, 5);
    cout << s;

    return 0;
}