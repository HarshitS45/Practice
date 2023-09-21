#include<iostream>
using namespace std;

string  isSumOfTwo(int N){
        int *b,k=0,count;
        for(int i=1;i<N;i++){
            count=0;
            for(int j=1;j<=i;j++){
                if(i%j==0)
                    count++;
            }
            if(count==2){
                b[k]=i;
		k++;
            }
        }
        if(N%2==1){
            for(int i=0;i<k;i++){
                if(b[i]==N-2)
                    return "Yes";
                else
                    return "No";
            }
        }
	return "No";
}

int main(){
	cout<<isSumOfTwo(23);
}
