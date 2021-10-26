#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *left;
	node *right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
multimap<int, int> m;
void getLevelOrder(node *root){
    int n=0;
    queue<pair<node *,int>> q;
    q.push({root,0});
    while(!q.empty()){
        pair<node *,int> curr=q.front();
        q.pop();
        m.insert({curr.second,curr.first->data});
        if(curr.first->left){
            q.push({curr.first->left,curr.second-1});
        }
        if(curr.first->right){
            q.push({curr.first->right,curr.second+1});
        }
    }
}

void bottomView(struct node *root)
{
    if(root)
    getLevelOrder(root);
    auto it=m.begin();
    it++;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        if(it->first != itr->first)
        cout<<(itr->second)<<" ";
        it++;
    }
    m.clear();
}

int main()
{
	node *root=new node(30);
	root->left=new node(20);
	root->right=new node(50);
	root->left->left=new node(10);
	root->right->left=new node(40);
	root->right->right=new node(60);
	root->right->right->right=new node(70);
    bottomView(root);
	return 0;
}