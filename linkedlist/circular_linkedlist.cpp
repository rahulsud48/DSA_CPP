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

void traverse(Node* head)
{
    Node* curr = head;
    std::cout<<curr->data<<" ";
    while (curr->next != head)
    {
        curr = curr->next;
        std::cout<<curr->data<<" ";
    }
    std::cout<<"\n";
}
int main()
{
    Node* head = new Node(10);
    // head->next = new Node(5);
    // head->next->next = new Node(20);
    // head->next->next->next = new Node(15);
    // head->next->next->next->next = head;
    head->next = head;
    traverse(head);
}