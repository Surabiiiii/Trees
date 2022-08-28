int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    int ans=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        ans=ans+sumOfNodes(root->children[i]);
    }
    return ans;
}
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* ans=root;
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>*max=maxDataNode(root->children[i]);
        if(ans->data<max->data)
        {
            ans=max;
        }
    }
    return ans;
}
int getHeight(TreeNode<int>* root) {
    // Write your code here
    if (root==NULL)
    {
        return 0;
    }
    int maxh=1;
    for(int i=0;i<root->children.size();i++)
    {
        int Maxchildh=getHeight(root->children[i]);
        if (Maxchildh>=maxh)
        {
            maxh=Maxchildh+1;
        }
    }
    return maxh;
}
int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
     if(root==NULL)
        return 0;
    if(root->children.size()==0)
        return 1;
        int totalleafnode=0;
    for(int i=0;i<root->children.size();i++)
    {
        totalleafnode=totalleafnode+getLeafNodeCount(root->children[i]);
    }
    return totalleafnode;
}
