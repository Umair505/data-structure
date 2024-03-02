/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
LINK->https://www.codingninjas.com/studio/problems/implement-stack-with-linked-list_630475?fbclid=IwAR36xcpseF0TIUMaMtgp_sfhsQHg8FPxFBs_Wm9LdHSG3YkIX2qUgtvizsg&leftPanelTabValue=PROBLEM

*****************************************************************/

class Stack
{
    //Write your code here

public:
 Node* head = NULL;
        Node* tail = NULL;
        int sz =0;
    Stack()
    {
        //Write your code here
       
    }

    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here
        return sz==0;
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        tail->next=newNode;
        tail = newNode;
    }

   void pop() {
    if (isEmpty()) {
        // Empty list, nothing to pop
        return;
    } 
    sz--;
       
    if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else{
        Node* tmp = head;
        while(tmp->next != tail)
        {
         tmp = tmp->next;    
        }
        delete tail;
            tail = tmp;
            tail->next = NULL;
    }
    
}



    int getTop()
    {
        //Write your code here
        if(!isEmpty()) return tail->data;
        else return -1;
    }
};