//Integer input
#include<bits/stdc++.h>
using namespace std;
void subSeq(int arr[],int index,int n,vector<vector<int>>&arr1,vector<int>&temp){
    //stoping condition
    if(index==n){
        arr1.push_back(temp);
        return;
    }
    //not include
    subSeq(arr, index + 1, n, arr1, temp);
    //include
    temp.push_back(arr[index]);
    subSeq(arr, index + 1, n, arr1, temp);
    temp.pop_back();
}
int main(){
    int arr[] = {1, 2, 3};
    vector<vector<int>> arr1;
    vector<int> temp;
    subSeq(arr,0,3,arr1,temp);
    for (int i = 0; i < arr1.size();i++){
        for (int j = 0; j < arr1[i].size();j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
        return 0;
}




//For a input string

// #include<bits/stdc++.h>
// using namespace std;
// void subSeq(string &s,int index,int n,vector<string>&arr1,string &temp){
//     //stoping condition
//     if(index==n){
//         arr1.push_back(temp);
//         return;
//     }
//     //not include
//     subSeq(s, index + 1, n, arr1, temp);
//     //include
//     temp.push_back(s[index]);
//     subSeq(s, index + 1, n, arr1, temp);
//     temp.pop_back();
// }
// int main(){
//     string s="abcd";
//     vector<string> arr1;
//     string temp;
//     subSeq(s,0,3,arr1,temp);
//     for (int i = 0; i < arr1.size();i++){
//         cout <<arr1[i]<<endl;
//     }
//         return 0;
// }