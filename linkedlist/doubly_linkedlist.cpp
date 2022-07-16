#include<iostream>

struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void show(Node* n)
{
    std::cout<<"Previous Node Address: "<<n->prev<<"\n";
    std::cout<<"Current Node Address: "<<n<<"\n";
    std::cout<<"Data: "<<n->data<<"\n";
    std::cout<<"Next Node Address: "<<n->next<<"\n\n";
}

int main()
{
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;

    temp1->next = temp2;
    temp2->prev = temp1;

    show(head);
    show(temp1);
    show(temp2);

}