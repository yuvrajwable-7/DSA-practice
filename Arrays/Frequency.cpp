//To find the frequency of each element:

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 7,7,7,};   //ascending order

    int n = sizeof(arr) / sizeof(arr[0]);
    bool vis[n] = {false};
    int count = 0;
    for (int i = 0; i < n;i++){
        if(vis[i]==false){    //Element occcuring for the first time 
            vis[i] = true;
            count=1;
        }
        for (int j = i + 1; j < n;j++){
            if(arr[i]==arr[j]){
                vis[j] = true;
                count++;
            }
        }
        cout << arr[i] << "->" << count;
        cout << endl;
    }
    

        return 0;
}


