/*
 * @Author - Harshit Srivastava
 * Problem: Reverse the array in k groups.
 * eg. array[]={1,2,3,4,5,6};,k=2,n=6
 * output: 2 1 4 3 6 5
 */


#include<iostream>
using namespace std;

void reverseInGroups(int *arr, int n, int k){
        int b[n],limit=k,i,j;
        while(limit<=n){
            for(i=limit-1,j=limit-k ;i>=limit-k && j<limit ;i--,j++){
                b[j]=arr[i];
            }
            limit=limit+k;
        }
        limit=limit-k;
        for(i=limit,j=n-1; i<n && j>=limit ; i++,j--){
            b[j]=arr[i];
        }
        for (int i=0;i<n;i++){
            arr[i]=b[i];
	    cout<<arr[i]<<"\t";
        }
	return;
    }

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	reverseInGroups(arr,13,5);
	return 0;
}
