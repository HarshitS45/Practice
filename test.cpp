#include<iostream>

using namespace std;

/*struct node
	{
		int data;
		struct node *next;
	};

class harshit{
		public:
			void printname(){
				cout<<"Harshit";
			}
};
	
int main(){

	harshit H;
	harshit *A;
	A->printname();
	H.printname();}

void print(int b[5]){
	int c[5];
	c[0]=b[0];
	cout<<c;}
*/

  //      ans[1]=j;
        /*for(int j=i+1;j<n;j++){
            if(arr[j]==j+1){
                ans[1]=j;
                break;
            }
        }
        return ans;
    }*/
int main()
{
	string input;
	int digit;
	cin>>input;
	cin>>digit;
	int i=0;
	while(digit<input[i]){
		i++;
	}
	input.insert(i,"digit");
	cout<<input;

}
