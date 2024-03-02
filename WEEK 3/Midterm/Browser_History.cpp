#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>mylist;
    // Declare a list to store web addresses
    string s;
    // Read input until "end" is encountered
    while (true)
    {
        cin>>s;
        if(s=="end") break;
        mylist.push_back(s);
    }
    int que; cin>>que;// Iterator to keep track of the current position in the list
    auto current = mylist.begin();
    while(que--)
    {
        string comnd;
        cin>>comnd;
        if(comnd=="visit")
        {
            string visitAdrs; cin>>visitAdrs;
            auto it = find(mylist.begin(),mylist.end(),visitAdrs);// Find the address in the list
            if(it != mylist.end())//it jodi sheshe chole jai tahole not found 
            // If found, update the current iterator and print the address
            {
                current = it;
                cout<<*current<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }
        else if(comnd == "next")// Move to the next address in the list and print it if available
        {
            auto nextAddress = next(current);
            if(nextAddress != mylist.end())
            {
                current++;
                cout<<*current<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(comnd == "prev") // Move to the previous address in the list and print it if available
        {
            if(current != mylist.begin())
            {
                current--;
                cout<<*current<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    
    return 0;
}

/*
class Node{
    public:
     string val;
     Node* prev;
     Node* next;
     Node(string val)
     {
         this->val = val;
         this->next = NULL;
         this->prev = NULL;
     }
};

class BrowserHistory {
public:
    Node* current;
    BrowserHistory(string homepage) {
     this->current = new Node(homepage);

    }
    
    void visit(string url) 
    {
       Node* newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode; 
    }
    
    string back(int steps) {
        while(current->prev != NULL && steps >0)
        {
            current = current->prev;
            steps--;
        }
        return current->val;
    }
    
    string forward(int steps) {
        while(current->next != NULL && steps>0)
        {
            current = current->next;
            steps--;
        }
        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
