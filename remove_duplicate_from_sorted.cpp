Node *removeDuplicates(Node *root)
{
    Node* forward=root;
    forward=forward->next;
    Node* backward=root;
    Node* ans=backward;
    while(forward!=NULL)
    {
        if(forward->data!=backward->data)
        {
            backward->next=forward;
            backward=forward;
            forward=forward->next;
        }
        else if(forward->data==backward->data)
        {
            forward=forward->next;
            continue;
        }
        
    }
    backward->next=NULL;
    return ans;
}

// Time - O(n)
// Space - O(1)