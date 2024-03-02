//LINK->https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908
include <bits/stdc++.h> 
class Node
{
    public:
     int data;
     Node* next;
     Node(int data)
     {
         this->data = data;
         this->next = NULL;
     }
};
class Queue {
public:
    int sz = 0;
    Node* head = NULL;
    Node* tail = NULL;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return sz==0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        sz++;
        Node* newNode = new Node(data);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(head==NULL)
        {
            return -1;
        }
        else
        {
            sz--;
            Node* deleteNode = head;
            head = head->next;
            return deleteNode->data;
            delete deleteNode;
        }
        
    }

    int front() {
        // Implement the front() function
        if(!isEmpty())
        {
            return head->data;
        }
        else{
            return -1;
        }
    }
};