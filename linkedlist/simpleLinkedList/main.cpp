#include <iostream>
using namespace std;


class Node{
    public:
        int value; //node value
        //a pointer NOde variable that stores the address of the next node
        Node* next; 
};


//push at head of linked list 
//Time Complexity: O(1), We have a pointer to the head and we 
//can directly attach a node and change the pointer.
// So the Time complexity of inserting a node at the head 
//position is O(1) as it does a constant amount of work.

//** pass by ref, (*inFunction), (&callFunction)
void pushAtHead(Node** head, int v)
{
    //1. allocate node
    Node* new_node = new Node();
    //2. put the data into the node
    new_node->value = v;
    //3. make the next of the new node to the old head
    new_node->next = (*head);
    //4. make the new node be the head
    (*head) = new_node;   
}

void printLinkedList(Node* head){
    //print the linked list value
    Node *tHead = head;
    while (tHead != NULL)
    {
        cout<<tHead->value<<" ";
        tHead = tHead->next;
    }
    cout<<endl;

}

// Given a node prev_node, insert a
// new node after the given
// prev_node
void insertAfter(Node* prev_node, int new_data)
{
    // 1. Check if the given prev_node is NULL
    if(prev_node == NULL){
        cout<<"previous node cannot be node"<<endl;
        return;
    }
 
    // 2. Allocate new node
    Node* new_node = new Node(); 

    // 3. Put in the data
    new_node->value = new_data; 
    // 4. Make next of new node as
    // next of prev_node
    new_node->next = prev_node->next; 
    // 5. move the next of prev_node
    // as new_node
    prev_node->next = new_node;
    //Time complexity: O(1), since prev_node is already given as argument 
    //in a method, no need to iterate over list to find prev_node
}

// insert a node at the end of linked list
void append(Node** head_ref, int new_data)
{
    // 1.allocate node
    Node* new_node = new Node();
    //used in step 5
    Node* last = *head_ref;
    //2. put in the data
    new_node->value = new_data;
    //3. this new node is going to be the last node so make next of it as null
    new_node->next = NULL;
    //4. if the linked list is empty then make the new node as head
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    //5.else traverse till the last node
    while(last->next != NULL){
        last = last->next;
    }
    //6. change the next of the last node 
    last->next = new_node;
    return;
}
//iterative search
bool search(Node* head, int x)
{
    Node* current = head;
    while(current != NULL)
    {
        if(current->value == x)
            return true;
        current= current->next;
    }
    return false;

//Time Complexity: O(N), Where N is the number of nodes in the LinkedList
}

//recursive approach
// If the head is NULL, return false.
// If the head’s key is the same as X, return true;
// Else recursively search in the next node. 
/* Checks whether the value x is present in linked list */
bool searchRecursive(Node* head, int x)
{
    // Base case
    if (head == NULL)
        return false;
 
    // If key is present in current node, return true
    if (head->value == x)
        return true;
 
    // Recur for remaining list
    return search(head->next, x);
    //Time Complexity: O(N)
}

int main(){


    //**//
    
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* head;
    // allocate 3 nodes in the heap
    one = new Node;
    two = new Node;
    three = new Node;
    //**//
    //Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    //connect nodes
    one->next = two;
    two->next = three;
    three->next=NULL;
    
    head = one;

    printLinkedList(head);

//using functions
    pushAtHead(&head, 0);
    printLinkedList(head);

    insertAfter(two, 6);
    printLinkedList(head);

    append(&head, 4);
    printLinkedList(head);

    //call search
    search(head, 3) ? cout<<"YES\n"<<endl : cout<<"NO"<<endl; 
    searchRecursive(head, 3)? cout<<"YES\n" : cout<<"NO"<<endl;
    return 0;


}