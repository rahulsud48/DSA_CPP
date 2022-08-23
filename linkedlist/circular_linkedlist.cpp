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

Node* insert_begin(Node* curr, int x)
{
    Node* head = new Node(x);
    Node* curr_ = curr;
    while (curr_->next != curr)
    {
        curr_ = curr_->next;
    }
    curr_->next = head;
    head->next = curr;
    return head;
}

Node* insert_begin_efficient(Node* head, int x)
{
    Node* temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}

void traverse(Node* head)
{
    if (head == NULL)
    {
        return;
    }
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
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;

    head = insert_begin_efficient(head, 25);
    traverse(head);
}