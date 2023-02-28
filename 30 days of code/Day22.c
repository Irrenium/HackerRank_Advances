
int getHeight(Node* root){
  //Write your code here
    if (root==NULL)
        return 0;
    else if ((root->left==NULL) && (root->right==NULL))
        return 0;
    else if ((root->left != NULL) && (root->right==NULL))
        return 1+getHeight(root->left);
    else if ((root->left == NULL) && (root->right!=NULL))
        return 1+getHeight(root->right);
    else{
        int a, b;
        a=getHeight(root->left);
        b=getHeight(root->right);
        if(a>b)
            return 1 + a;
        else
            return 1 + b;
    }
}