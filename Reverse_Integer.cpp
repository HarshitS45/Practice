#include<iostream>
using namespace std;

class ReverseInteger{
public:
    int reverse(int x) {
        int ans=0;
     	    while(x!=0){
       //  	 if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
       // 		return 0;
       //	   }
            ans=(ans*10)+x%10;
            x=x/10;
        }
        return ans;
     }
};

int  main(){
	ReverseInteger A;
	int data;
	cout<<"Enter number to reverse :";
	cin>>data;
	int ans=A.reverse(data);
	cout<<"Revrse of "<<data<<" is "<<ans<<".";
}
