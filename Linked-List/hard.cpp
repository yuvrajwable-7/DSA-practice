#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node*next;

    Node(int v){
        value = v;
        next = NULL;
    }
};
void traversal(Node*head){   //traversing of the linklist 
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertAtHead(Node*&head,int v){      //inserting a new node at the start making it the new head
    Node *newNode = new Node(v);
    newNode->next = head;       //head become the second element
    head = newNode;
}
void insertAtEnd(Node*&head,int v){       //inserting a new node at the end before the NULL
    if(head==NULL){         //check if the there is no node inserted
        insertAtHead(head, v);
        return;
    }
    Node *newNode = new Node(v);
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}


//Hard Level problems:-


//Find the intersection point for the both linklist habing differenet lengths

int getLength(Node*head){
    Node*temp=head;
    int count = 1;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

Node*moveKsteps(Node*head,int k){
    Node *temp = head;
    while(k--){
        temp = temp->next;
    }
    return temp;
}

Node*getIntersectionPoint(Node*head1,Node*head2){
    int l1 = getLength(head1);
    int l2 = getLength(head2);
    Node *ptr1;
    Node *ptr2;
    if(l1>l2){
        int k = l1 - l2;
        ptr1=moveKsteps(head1,k);
        ptr2 = head2;
    }
    else{
        int k = l2 - l1;
        ptr2 = moveKsteps(head2, k);
        ptr1 = head1;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

// reverse the k nodes at a time of linklist and joints all the nodes of linklist

Node*reverseKLL(Node*head,int k){
    Node*prev=NULL;
    Node *curr = head;
    Node *next;
    int counter = 0;
    //1.Reverse the first K nodes
    while(curr!=NULL && counter<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        counter++;
    }

    //curr will be pointing k+1th node
    //2.Call recursively for n-k nodes
    if(curr!=NULL){
         Node *newHead = reverseKLL(curr, k);
         //3.connecting first k nodes to the reversed linklist
         head->next = newHead;
    }
    //4.retured the head of the combined linklist
    return prev;
}

//Detect whether the linklist has cycle or not 
//Then remove the cycle from the linklist

bool getCycle(Node*head){
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast){
            return true;
        }
    }
    return false;
}


bool removeCycle(Node*head){
    Node *slow = head;
    Node *fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;

    } while (slow != fast);
    cout << fast->value << endl;    //point where slow and fast meets
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next=NULL;
}



int main(){
    Node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    head->next->next->next->next->next = head->next->next;

    if(getCycle(head)){
        removeCycle(head);
        traversal(head);
    }
    else{
        cout << "No cycle detected";
    }

    return 0;
}