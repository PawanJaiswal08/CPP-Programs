// Time Complexity : O(n)

#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){

    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

void reverseArrayRecursively(int arr[], int start, int end){

    if(start>=end){
        return;
    }

    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    reverseArrayRecursively(arr, start+1, end-1);

}

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    int start=0, end=n-1;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\nInput Array : ";
    printArray(arr,n);

    cout<<"\nReversed Array : ";
    reverseArrayRecursively(arr, start, end);
    printArray(arr,n);

    return 0;
}