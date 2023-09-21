#include<iostream>
using namespace std;

int Triplate_sum(int *arr,int sum,int n){
	int total;
	for(int i=0;i<n;i++){
		total=arr[i];
		for(int j=0;j<n;j++){
			if(j==i)
				continue;
			else
				total=total+arr[j];
			for(int k=0;k<n;k++){
				if(k==j || k==i)
					continue;
				else
					total=total+arr[k];
				if(total==sum)
					return 1;
			}
		}
	}
	return 0;
}

int main(){
	int array[]={6,4,3,2,1};
	cout<<Triplate_sum(array,9,5);
}

