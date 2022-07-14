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

int main()
{
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    show(head);
    show(temp1);
    show(temp2);

    return 0;

}