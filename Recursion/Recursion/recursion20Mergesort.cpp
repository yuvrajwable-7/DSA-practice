//Ascending order
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector<int> temp(end - start + 1);        //as the array is divided so end-start+1 is the size of array
    int left = start, right = mid + 1, index = 0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            left++, index++;
        }
        else{
            temp[index] = arr[right];
            right++, index++;

        }
    }
    //left array is not empty yet
    while(left<=mid){
        temp[index] = arr[left];
        left++, index++;
    }
    //right array is not empty yet
    while(right<=end){
        temp[index] = arr[right];
        right++, index++;
    }
    //put temp elements in array
    index = 0;
    while(start<=end){
        arr[start] = temp[index];
        start++, index++;
    }
}

void mergeSort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid = start + (end - start) / 2;
    //left side
    mergeSort(arr, start, mid);
    //right side
    mergeSort(arr, mid + 1, end);
    //merging left and right part
    merge(arr, start, mid, end);
}




int main(){
    int arr[] = {6, 5, 4, 2, 9, 10, 2, 6, 8, 3};
    mergeSort(arr, 0, 9);
    //printing sorted array elements
    for (int i = 0; i < 10;i++){
        cout << arr[i] << " ";
    }
        return 0;
}






//Descending order 


// #include<bits/stdc++.h>
// using namespace std;

// void merge(int arr[],int start,int mid,int end){
//     vector<int> temp(end - start + 1);        //as the array is divided so end-start+1 is the size of array
//     int left = start, right = mid + 1, index = 0;
//     while(left<=mid && right<=end){
//         if(arr[left]>=arr[right]){
//             temp[index] = arr[left];
//             left++, index++;
//         }
//         else{
//             temp[index] = arr[right];
//             right++, index++;

//         }
//     }
//     //left array is not empty yet
//     while(left<=mid){
//         temp[index] = arr[left];
//         left++, index++;
//     }
//     //right array is not empty yet
//     while(right<=end){
//         temp[index] = arr[right];
//         right++, index++;
//     }
//     //put temp elements in array
//     index = 0;
//     while(start<=end){
//         arr[start] = temp[index];
//         start++, index++;
//     }
// }

// void mergeSort(int arr[],int start,int end){
//     if(start==end){
//         return;
//     }
//     int mid = start + (end - start) / 2;
//     //left side
//     mergeSort(arr, start, mid);
//     //right side
//     mergeSort(arr, mid + 1, end);
//     //merging left and right part
//     merge(arr, start, mid, end);
// }




// int main(){
//     int arr[] = {6, 5, 4, 2, 9, 10, 2, 6, 8, 3};
//     mergeSort(arr, 0, 9);
//     //printing sorted array elements
//     for (int i = 0; i < 10;i++){
//         cout << arr[i] << " ";
//     }
//         return 0;
// }



