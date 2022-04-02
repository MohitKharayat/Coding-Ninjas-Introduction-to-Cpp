/**You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and 
you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the 
order -> 1,3,5,.......,6,4,2.***/
#include <bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n){
    int start=0,end=n-1,value=1;
    while(start<=end){
        if(value%2==1){
            arr[start]=value;
            value++;
            start++;
        }
        else{
            arr[end]=value;
            value++;
            end--;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        arrange(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete []arr;
    }
}