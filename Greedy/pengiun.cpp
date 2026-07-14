#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n;
    cin >> n;
    int count = 0;
    vector<ll>m1,m2;
    for (ll i = 1; i <= n;i++){
        ll y;
        cin >> y;
        if(y<0){
            m2.push_back(abs(y));
        }else{
            m1.push_back(y);
        }
    }
    vector<ll>f1,f2;
    for (ll i = 1; i <= n;i++){
        ll y;
        cin >> y;
        if(y<0){
            f2.push_back(abs(y));
        }else{
            f1.push_back(y);
        }
    }
    if(m1.size()>0){
        sort(m1.begin(), m1.end());
    }
    if(m2.size()>0){
        sort(m2.begin(), m2.end());
    }
    if(f1.size()>0){
        sort(f1.begin(), f1.end());
    }
    if(f2.size()>0){
        sort(f2.begin(), f2.end());
    }
    ll c = 0;
    ll d = 0;
    while(c<m2.size() && d<f1.size()){
        if(m2[c]>f1[d]){
            c++, d++, count++;
        }
        else{
            c++;
        }
    }
    c = 0;
    d = 0;
    while(c<m1.size() && d<f2.size()){
        if(f2[d]>m1[c]){
            c++, d++, count++;
        }
        else{
            d++;
        }
    }
    cout << "The count of pair are:" << count;

    return 0;
}