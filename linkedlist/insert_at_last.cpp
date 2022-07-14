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

Node* insert(Node* head, int x)
{
    if (head == NULL)
    {
        head = new Node(x);
        return head;
    }
    else
    {
        Node* next = head->next;
        while (next->next != NULL)
        {
            next = next->next;
        }
        next->next = new Node(x);
    }
    return head;
}

int main()
{
    int x = 50;
    Node* head = new Node(10);
    // Node* head = NULL;
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insert(head, x);
    traverse_recursive(head);
    return 0;

}