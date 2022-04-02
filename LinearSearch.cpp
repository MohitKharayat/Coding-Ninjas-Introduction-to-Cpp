#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            return i;
    }
    return -1;
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
        int key;
        cin>>key;
        cout<<linearSearch(arr,n,key)<<endl;
    }
}