#include<iostream>
using namespace std;


int tictactoe(int array[3][3]){
	int index1=0,count=0;
	for(int index=0;index<3;index++){
		if(array[index][index1]==array[index][index1+1] && array[index][index1]==array[index][index1+2]){
			
			count++;
		}
		 if(array[index1][index]==array[index1+1][index] && array[index1][index]==array[index1+2][index]){
			
			count++;
                }
		
	}
	return count;
}

int main()
{
        int array[3][3];
        cout<<"Enter the entries for tic tac toe:\n";
        for(int index=0;index<3;index++){
                for(int index1=0;index1<3;index1++){
                        cin>>array[index][index1];
                }
        }
        for(int index=0;index<3;index++){
                cout<<"\t";
                for(int index1=0;index1<3;index1++){
                        cout<<array[index][index1]<<"\t";
                }
                cout<<"\n";
        }
	int count=tictactoe(array);
	if(count==1)
                 cout<<"Player won the game";
	else if(count>1)
		cout<<"Invalid entries";
        else    
		 cout<<"Match Draw";	
	return 0;
}


