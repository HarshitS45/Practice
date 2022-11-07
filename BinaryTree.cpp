// Create data structure BinaryTree


#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left,*right;

	Node(int data){
		this->data=data;
		this->right=0;
		this->left=0;
	}
};

class BinaryTree{
//	private:
		//Node *root=0;
	public:
		Node *root=0;
		int element;
		void insert(){
			if(root==0){
				cout<<"Enter data:";
				cin>>element;
				root=new Node(element);
				return;
			}
			Node *temp=root;
			while(temp->left!=0 && temp->right!=0){
				temp=temp->left;
			}
			Node *leftnode,*rightnode;
			cout<<"Enter data for left node:";
			cin>>element;
			leftnode=new Node(element);
			temp->left=leftnode;
			cout<<"Enter data for right node:";
			cin>>element;
			rightnode=new Node(element);
			temp->right=rightnode;
		}

		void remove(){

		}

		void print(Node* root){
			/*Node *temp=root;
			cout<<root->data;
			temp1=temp1->left;
			temp2=temp2->right;
			while(temp->left!=0 || temp->right!=0){
				cout<<temp->data;
				temp=temp->left;
				temp2=temp2->right;
			}
			cout<<temp->data<<endl;
			*/
			if(root){
				cout<<root->data;
				print(root->left);
				print(root->right);
			}
		}

};

int main(){
	Node *root;
	BinaryTree A;
	A.insert();
	A.insert();
	A.insert();
	A.insert();
	A.insert();
	A.print(A.root);
}
			
			



