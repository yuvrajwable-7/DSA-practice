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

//Easy Level Problems:-

//Deleting the alternate element in the linklist 
void deleteAlternateNode(Node*head){
    Node*temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node*deleteNode=temp->next;
        temp->next=temp->next->next;
        temp=temp->next;
        free(deleteNode);
    }
}

//Find the the middle node of linklist 
// when the fast pointer reaches the last node the slow pointer reaches the middle of the linklsit

int findMiddleNode(Node*head){
    Node*slow=head;
    Node*fast=head;
        while(fast!=NULL && fast->next!=NULL){  //fast!=NULL => for even number of elements || fast->next!=NULL => for odd number of elements
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->value;
}


//Medium Level Problems:-

//Check if the two linklist are equal or not 
//Use two pointers

bool checkEqual(Node*head1,Node*head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->value!=head2->value){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return (head1==NULL && head2==NULL);
}


//Reversing the linklist
//Use three pointers

void reversal(Node*&head){
    Node*prev=NULL;
    Node*curr=head;
    Node*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

//Determine whether the linklist is palindrone or not
//easy way:just reverse the linklist and compare withe the original linklist
//other way traverse till the middle element using slow and fast pointer and element after the middle elements just reverse and the compare it with first half


bool checkPalindrone(Node*head){
    if(head->next==NULL){
        return true;
    }
    // 1.find the middle element
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //2.reverse the linklist after the middle element
    Node*curr=slow;
    Node*prev=NULL;
    Node*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    // 3.campare
    Node*head2=prev;
    while(head2!=NULL){
        if(head->value!=head2->value){
            return false;
        }
        head=head->next;
        head2=head2->next;

    }
    return true;


}  

//Rotate the linklist to right by k places
void rotateByK(Node*&head,int k){
    int n=1;
    Node *temp = head;
    while(temp->next!=NULL){
        n++;
        temp = temp->next;
    }
    k = k % n;
    if(k==0){
        return;
    }
    //Make the last node point to head
    temp->next = head;
    //make the last node new head
    temp=head;
    for (int i = 1; i < (n - k);i++){
        temp = temp->next;
    }
    //Make the n-k+1 as new head
    Node *newHead = temp->next;
    //make n-k point to null
    temp->next = NULL;

    head = newHead;
}

// Merge to two sorted linklist such that the resulted linklist is also sorted
//Simply use two pointer and compare the value of given two sorted linklist

Node*mergeLinkList(Node*head1,Node*head2){
    Node *dummyNode = new Node(-1);
    Node *head3 = dummyNode;
    while(head1!=NULL && head2!=NULL){
        if(head1->value<head2->value){
            head3->next = head1;
            head1 = head1->next;
        }
        else{
            head3->next = head2;
            head2 = head2->next;
        }
        head3 = head3->next;
    }
    if(head1){
        head3->next = head1;
    }
    if(head2){
        head3->next = head2;
    }

    return dummyNode->next;
}

int main(){
    Node*head1=NULL;
    insertAtEnd(head1,1);
    insertAtEnd(head1,2);
    insertAtEnd(head1,3);
    insertAtEnd(head1,6);
    insertAtEnd(head1,7);
    traversal(head1);

    Node*head2=NULL;
    insertAtEnd(head2,4);
    insertAtEnd(head2,5);
    traversal(head2);

    traversal(mergeLinkList(head1,head2));
    

    return 0;
}