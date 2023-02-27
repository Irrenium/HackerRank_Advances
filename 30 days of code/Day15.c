Node* insert(Node *head,int data)
{
    //Complete this function
    struct Node *ll, *it;
    ll=(struct Node *)malloc(sizeof(struct Node));
    ll->data=data;
    ll->next=NULL;
    
    if(head==NULL)
        {
        head=ll;
    }
    else
        {
        it=head;
        while(it->next)
            it=it->next;
        it->next=ll;
    }
    return head;
}