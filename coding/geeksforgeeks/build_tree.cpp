#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	Node *left,*right;
};
typedef struct Node node;

node *newnode(int key){
	node *temp=(node *)malloc(sizeof(node));
	temp->key=key;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
int search(vector<int> in,int start,int end,int key){
	int i;
	for (i = start; i <= end; ++i)
	{
	
		if(in[i]==key)
			return i;
	}
	return i;
}
node *tree(vector<int> in,vector<int> pos,int start,int end,int *idx){
	if(start>end)
		return NULL;
	node *root=newnode(pos[*idx]);
	(*idx)--;
	if (start==end)
		return root;
	int index=search(in,start,end,root->key);
	root->right=tree(in,pos,index+1,end,idx);
	root->left=tree(in,pos,start,index-1,idx);
	return root;
}
node *buildTree(vector<int> in,vector<int> pos,int n){
	int idx=n-1;
	return tree(in,pos,0,n-1,&idx);
}
void print(node *root){
	if(root==NULL)
		return;
	cout << root->key << " ";
	print(root->left);
	print(root->right);
}
int main(){
	int n;
	cin >>n;
	std::vector<int> in(n),pos(n);
	for (int i = 0; i < n; ++i)
	{
	
		cin >> in[i];
	}
	for (int i = 0; i < n; ++i)
	{
	
		cin >> pos[i];
	}
	node *root=buildTree(in,pos,n);
	print(root);
	return 0;
}