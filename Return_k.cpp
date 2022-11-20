/*
 * @Author - Harshit Srivastava
 * Problem: Print the number which arrives first k times.
 * Input- 1 7 2 3 4 3 7  k=2
 * Output- 3
 */

#include<iostream>
using namespace std;

int firstElementKTime(int a[], int n, int k){
        int max=a[0];
	cout<<k<<endl;
        for(int i=0;i<n;i++){
            if(a[i]>max)
                max=a[i];
        }
	cout<<k<<endl;
        int b[max];
        for(int i=0;i<=max;i++)
            b[i]=0;
	cout<<k<<endl;
        for(int i=0;i<n;i++){
            b[a[i]]++;
            if(b[a[i]]==k)
                return a[i];
        }
        return -1;
    }

int main(){
	
	int arr[]={4, 2, 2, 2, 3, 4, 4, 4, 3, 2};
	cout<<firstElementKTime(arr,10,3);
}
