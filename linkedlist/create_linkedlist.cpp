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

void show(Node* n)
{
    std::cout<<"Current Node Address: "<<n<<"\n";
    std::cout<<"Data: "<<n->data<<"\n";
    std::cout<<"Next Node Address: "<<n->next<<"\n";
}

void traverse(Node* head)
{
    while (head!=NULL)
    {
        std::cout<<head->data<<" "<<head->next<<" \n";
        head = head->next;
    }
}


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

int main()
{
    Node* head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    traverse(head);
    traverse_recursive(head);
    return 0;

}