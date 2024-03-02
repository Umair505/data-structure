#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_value(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    tail->next = new_node;
    tail = new_node;
}

void find_mid(Node *head, int count)
{
    Node *tmp = head;
    int middle = count / 2;
    for (int i = 0; i < middle-1; i++)
    {
        tmp = tmp->next;
    }

    if (count % 2 == 1)
    {
        cout << tmp->next->value << endl;
    }
    else
    {
        cout << tmp->value << " " << tmp->next->value << endl;
    }
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    int count = 0;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        count++;
        insert_value(head, tail, value);
        
    }
    find_mid(head, count);
    return 0;
}