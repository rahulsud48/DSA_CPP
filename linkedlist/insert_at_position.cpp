#include<iostream>

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void traverse_recursive(Node* head)
{
    if (head == NULL)
    {
        std::cout<<"\n";
        return;
    }
    std::cout<<head->data<<" ";
    traverse_recursive(head->next);
}

Node* insert_pos(Node* head, int x, int pos)
{
    if (head == NULL and pos == 0)
    {
        head = new Node(x);
        return head;
    }
    else if (head == NULL and pos != 0)
    {
        return NULL;
    }
    else if (head != NULL and pos == 0)
    {
        Node* curr = new Node(x);
        curr->next = head;
        return curr;
    }
    else
    {
        Node* curr = head;
        int count = 1;
        while (curr->next != NULL or count == pos-1)
        {
            if (pos-1 == count)
            {
                Node* new_node = new Node(x);
                Node* next_node = curr->next;
                curr->next = new_node;
                new_node->next = next_node;
            }
            curr = curr->next;
            count++;
        }
        return head;
    }
}

int main()
{
    int x = 1;
    int pos = 10;
    Node* head = new Node(10);
    // Node* head = NULL;
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insert_pos(head, x, pos);
    traverse_recursive(head);
    return 0;

}