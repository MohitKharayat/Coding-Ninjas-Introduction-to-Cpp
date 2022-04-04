/***You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. 
You need to print their intersection; An intersection for this problem can be defined when both the 
arrays/lists contain a particular value or to put it in other words, when there is a common value 
that exists in both the arrays/lists.
Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in the order they appear in the first array/list(ARR1)***/

#include<bits/stdc++.h>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2){
    int i,j;
    for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(input1[i] == input2[j]){
                cout<<input1[i]<<" ";
                input2[j]=INT_MIN;
                break;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int s1,s2;
        cin>>s1;
        int *input1 = new int[s1];
        for(int i=0;i<s1;i++){
            cin>>input1[i];
        }
        cin>>s2;
        int *input2 = new int[s2];
        for(int i=0;i<s2;i++){
            cin>>input1[i];
        }
        
		intersection(input1, input2, s1, s2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}
	return 0;
}
