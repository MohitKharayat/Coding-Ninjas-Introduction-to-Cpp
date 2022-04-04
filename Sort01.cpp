/***You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. 
Write a function to sort this array/list. Think of a solution which scans the array/list only once and 
don't require use of an extra array/list.
Note:
You need to change in the given array/list itself. Hence, no need to return or print anything.***/

#include<bits/stdc++.h>
using namespace std;

/*
void sortZeroesAndOne(int *input,int size){
    int zero=0;
    for(int i=0;i<size;i++){
        if(input[i]==0){
            int temp=input[i];
            input[zero]=input[i];
            input[i]=temp;
            zero++;
        }
    }
}
*/
void sortZeroesAndOne(int *input,int size){
    int i=0,j=size-1;
    while(i<j){
        if(input[i]==1){
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *input = new int[n];
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        sortZeroesAndOne(input,n);
        for(int i=0;i<n;i++){
            cout<<input[i]<<" ";
        }
        cout<<endl;
        delete[] input;
    }
}