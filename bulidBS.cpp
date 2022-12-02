#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* bulidTree(node *root){
    int data;
    cout<<"Enter your data: "<<endl;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    root = new node(data);
    cout<<"Enter left data for: "<<data<<endl;
    root->left = bulidTree(root->left);
    cout<<"Enter right data for:  "<<data<<endl;
    root->right = bulidTree(root->right);
    return root;
}

void levelOrderTraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* tmp = q.front();
        q.pop();
        if(tmp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<tmp->data<<" ";
            if(tmp->left != NULL){
                q.push(tmp->left);
            }
            if(tmp->right != NULL){
                q.push(tmp->right);
            }
        }
        
    }

}

int main()
{
    node *root = NULL;
    root = bulidTree(root);

    levelOrderTraversal(root);
    // 1 2 4 -1 -1 -1 3 5 -1 -1 8 -1 -1 
    return 0;
}