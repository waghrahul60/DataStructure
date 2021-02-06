if(temp->left->left == NULL)
    {
        return temp->data;
    }
    return secondMinimum(temp->left);