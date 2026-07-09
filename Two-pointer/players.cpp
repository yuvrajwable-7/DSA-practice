#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int str = 1;
    int end = n - 1;
    int p1 = 0;
    int p2 = 0;
    bool reversed = false;
    int turn = 1;
    int num = 0;
    while(str<end){
        num = 0;
        if(turn%2!=0){
            if(reversed==false){
                p1 = p1 + arr[str];
                str++;
                num = arr[str];
            }
            else{
                p1 = p1 + arr[end];
                end--;
                num = arr[end];
            }
        }
        else{
             if(reversed==false){
                p2 = p2 + arr[str];
                str++;
                num = arr[str];
            }
            else{
                p2 = p2 + arr[end];
                end--;
                num = arr[end];
            }

        }
        if(num%2==0){
            if(reversed==false){
                reversed = true;
            }
            else{
                reversed = false;
            }
        }
        turn++;
    }

    cout << "The sum for P1 is:" << p1;
    cout << endl;
    cout << "The sum for P2 is:" << p2;

    return 0;
}