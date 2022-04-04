/***You have been given a random integer array/list(ARR) and a number X.
Find and return the number of triplets in the array/list which sum to X.
Note :
Given array/list can contain duplicate elements.***/

#include<bits/stdc++.h>
using namespace std;

int tripletSum(int *input, int size, int x){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(input[i]+input[j]+input[k]==x){
                    count++;
                }
            }
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
        int value;
        cin>>value;
        cout<<tripletSum(input,n,value)<<endl;
    }
}