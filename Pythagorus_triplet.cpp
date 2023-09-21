#include<iostream>
#include<algorithm>

using namespace std;

bool checkTriplet(int A[], int n) {
	    for(int i=0;i<n;i++){
	        A[i]=A[i]*A[i];
		cout<<A[i]<<"\t";
	    }
	    cout<<endl;
        sort(A,A+n);
        for(int i=0;i<n;i++){
                cout<<A[i]<<"\t";
            }

	for(int i=0;i<n-1;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(A[i]+A[l]==A[r])
                    return true;
                else if(A[i]+A[l]<A[r])
                    l++;
                else
                    r--;
            }
        }
        return false;
	}

int main(){
	//int A[]={11, 62, 35, 9 ,62 ,60, 94, 16, 70, 38, 70, 59, 1, 72, 65, 18,16, 56, 16, 31, 40, 13, 89, 83, 55, 86, 11, 85};
	int A[]={3, 2, 3, 5, 6,2,4};
	cout<<checkTriplet(A,7);
}
