//Count of unique elements in array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 6, 6, 7, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool vis[100] = {false};
    int count = 0;
    for (int i = 0; i < n;i++){
          if(vis[arr[i]]==false){
              count++;
              vis[arr[i]] = true;
          }
    }
    cout << count;
    return 0;
}