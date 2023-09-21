/*
 * @Author - Harshit Srivastava
 * Question - Print the 2-D array in wave form.
 * Input - {{1,2,3,1},{4,5,6,5},{7,8,9,9}}
 * output- 1 4 7 8 5 2 3 6 9 9 5 1
 */

#include<iostream>
using namespace std;

int PrintLikeWave(int a[3][4],int m, int n){
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<m;j++){
				cout<<a[j][i]<<" ";
			}
		}
		else{
			for(int k=m-1;k>=0;k--){
                                cout<<a[k][i]<<" ";
                        }
		}
	}
	return 0;
}

int main(){
	int a[3][4]={{1,2,3,1},{4,5,6,5},{7,8,9,9}};
	PrintLikeWave(a,3,4);
}

			
