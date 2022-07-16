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

int search_recursive(Node* curr, int x, int pos)
{
    if (curr->data == x)
    {
        return pos;
    }
    if (curr->next == NULL)
    {
        if (curr->data==x)
        {
            return pos;
        }
        else
        {
            return -1;
        }
    }
    return search_recursive(curr->next, x, ++pos);
}

int search_iterative(Node* head, int x)
{
    int count = 1;
    while(head->next != NULL)
    {
        if (head->data == x)
        {
            return count;
        }
        else
        {
            head = head->next;
            count++;
        }
    }
    if (head->data == x)
    {
        return count++;
    }
    return -1;
}

int main()
{
    int x = 35;
    Node* head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    // int pos = search_iterative(head, x);
    int pos = search_recursive(head, x, 1);
    traverse_recursive(head);
    std::cout<<"The number "<<x<<" is present at position: "<<pos<<"\n";
    return 0;

}