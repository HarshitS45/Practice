/* Problem : Complement of base 10 integer.
 * @Author - Harshit Srivastava
 */

#include<iostream>
#include<math.h>
using namespace std;

class Complement{
	public:
		void FindComplement(int data){
			int *arr,i=0,sum=0,j;
			while(data!=0){
				arr[i]=data%2;
				data=data/2;
				i++;
			}
			for(j=0;j<i;j++){
				if(arr[j]==0)
					arr[j]=1;
				else
					arr[j]=0;
			}
			for(j=0;j<i;j++){
				sum=sum+arr[j]*pow(2,j);
			}
			cout<<"Complement of given integer base 10 is "<<sum<<endl;
		}
};

int main(){
	Complement A;
	int data;
	cout<<"Enter data:";
	cin>>data;
	A.FindComplement(data);
}
