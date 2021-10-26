void deleteList(Node* head)  
{  
Node* current = head;  
Node* next;  
  
while (current != NULL)  
{  
    next = current->next;  
    free(current);  // Inbuilt fun to delete the node
    current = next;  
}  
      
head_ref = NULL;  
}

// Time - O(n)
// Space - O(1)
