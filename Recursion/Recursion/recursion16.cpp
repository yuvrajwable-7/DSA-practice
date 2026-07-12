//Reverse a string 
#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int start,int end){
    if(start>=end){
        return;
    }
    char c=s[start];
    s[start] = s[end];
    s[end]=c;
    reverse(s, start + 1, end - 1);
}
int main(){
    string str = "yuvraj";
    reverse(str, 0, 5);
    cout<<str;
        return 0;
}