
Node* removeDuplicates(Node *head){
  //Write your code here
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    Node *prev = head;
    Node *curr = head->next;
    
    while (curr != NULL) {
        if (prev->data == curr->data) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}