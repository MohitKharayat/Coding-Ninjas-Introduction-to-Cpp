/***You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements 
in the array/list.
You don't need to print or return anything, just change in the input array itself.***/
#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int *arr, int size){
    int i=0;
    while(i<=size-1){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        swapAlternate(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete []arr;
    }
}