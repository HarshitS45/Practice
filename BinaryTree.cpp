// Create data structure BinaryTree


#include<iostream>
#include<queue>
using namespace std;

struct Node {
    	public:
        	int data;
        	Node *left;
        	Node *right;

        	Node(int data){
            		this->data=data;
            		this->left=0;
            		this->right=0;
        	}
};

Node *buildTree(Node *root){
	cout<<"Enter the data :"<<endl;
    	int data;
    	cin>>data;
    	root= new Node(data);
    	if(data==-1)
    	    return NULL;
    	cout<<"Enter the left side of "<<data<<endl;
    	root->left=buildTree(root->left);
    	cout<<"Enter the right side of "<<data<<endl;
    	root->right=buildTree(root->right);
    	return root;
}

void LevelorderTraversal(Node *root){
	queue<Node *> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node *temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty())
				q.push(NULL);
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
	cout<<endl;
	return;
}

void inorderTraversal(Node *root){
	if(root==NULL)
		return;
	inorderTraversal(root->left);
	cout<<root->data<<" ";
	inorderTraversal(root->right);
	cout<<endl;
	return;
}

void preorderTraversal(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
	cout<<endl;
	return;
}

void postorderTraversal(Node *root){
	if(root==NULL)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout<<root->data<<" "<<endl;
	return;
}

int main(){
    	Node *root =NULL;
    	root=buildTree(root);
	LevelorderTraversal(root);
    	inorderTraversal(root);
    	preorderTraversal(root);
    	postorderTraversal(root);
	return 0;
}
	


