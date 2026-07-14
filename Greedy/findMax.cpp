#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x,y;
	cin>>n>>x>>y;
	vector<int>a(n);
	vector<int>b(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
	    cin>>b[i];
	}
	long long sum_up=0;
	vector<int>change(n);
	for(int i=0;i<n;i++){
	    sum_up+=b[i];
	    change[i]=a[i]-b[i];
	}
	sort(change.rbegin(),change.rend());
	vector<int>pre(n+1,0);
	for(int i=1;i<=n;i++){
	    pre[i]=pre[i-1]+change[i-1];
	}
	long long total_sum=0;
	for(int i=0;i<=n;i++){
	    if(i<=x && (n-i)<=y){
	        long long total=sum_up+pre[i];
	        total_sum=max(total_sum,total);
	        
	    }
	}
	cout<<total_sum;
	
	}
