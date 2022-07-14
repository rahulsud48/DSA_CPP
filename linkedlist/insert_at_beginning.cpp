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

Node* insert(Node* curr, int x)
{
    Node* head = new Node(x);
    head->next = curr;
    return head;
}

int main()
{
    // Node* head = new Node(10);
    Node* head = NULL;
    int x = 5;
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    head = insert(head, x);
    traverse_recursive(head);
    return 0;

}