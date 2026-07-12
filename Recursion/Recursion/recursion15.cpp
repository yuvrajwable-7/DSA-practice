//Count vowels
#include<bits/stdc++.h>
using namespace std;
int countV(string str,int i){
    if(i==-1){
        return 0;
    }
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        return 1 + countV(str, i - 1);
    }
    else{
        return countV(str, i -1);
    }
}
int main(){
    string s = "ram";
    cout << countV(s, 2);
    return 0;
}