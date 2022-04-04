/***You have been given an integer array/list(ARR) and a number X. Find and return the total number of 
pairs in the array/list which sum to X.
Note:
Given array/list can contain duplicate elements.***/

#include<bits/stdc++.h>
using namespace std;

int pairSum(int *input, int size, int x){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(input[i]+input[j]==x)
                count++;
        }
    }
    return count;
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
        int x;
        cin>>x;
        cout<<pairSum(input,n,x)<<endl;
    }
}