/***You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.***/

#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j])
                break;
        }
        if(j==size)
            return arr[i];
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
        cout<<findUnique(arr,n);
    }
}