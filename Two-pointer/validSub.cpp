#include<iostream>
#include<set>
#include<string>
using namespace std;
int validsub(string s,int k){
    int maxi = 0;
    multiset<char> g;
    int size = s.size();
    int i = 0;
    for (int j = 0; j < size;j++){
         
        g.insert(s[j]);   
        while(*g.rbegin() - *g.begin()>k){
            g.erase(g.find(s[i]));
            i++;
        }
        int len = j - i + 1;
        maxi = max(maxi, len);
    }
    return maxi;
}
int main(){
    string s = "cbacd";
    int k = 2;
    int result = validsub(s, k);
    cout << "Longest valid substring length:" << result;

    return 0;
}