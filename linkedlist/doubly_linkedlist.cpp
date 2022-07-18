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

void traverse_recursive_with_address(Node* head)
{
    if (head == NULL)
    {
        return;
    }
    std::cout<<"Previous Address: "<< head->prev<<"\n";
    std::cout<<"Current Address: "<< head<<"\n";
    std::cout<<"Data: "<<head->data<<"\n";
    std::cout<<"Next Address: "<< head->next<<"\n\n";
    traverse_recursive_with_address(head->next);
}

void show(Node* n)
{
    std::cout<<"Previous Node Address: "<<n->prev<<"\n";
    std::cout<<"Current Node Address: "<<n<<"\n";
    std::cout<<"Data: "<<n->data<<"\n";
    std::cout<<"Next Node Address: "<<n->next<<"\n\n";
}

Node* insert_first(Node* head, int x)
{
    Node* curr = new Node(x);
    curr->next = head;
    head->prev = curr;
    return curr;
}

Node* delete_first(Node* head)
{
    head = head->next;
    head->prev = NULL;
    return head;
}

Node* insert_last(Node* head, int x)
{
    Node* last = new Node(x);
    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = last;
    last->prev = curr;
    return head;
}

Node* delete_last(Node* head)
{
    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
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




    head = insert_first(head, 5);
    head = insert_last(head, 40);
    traverse_recursive(head);
    head = delete_first(head);
    head = delete_last(head);
    traverse_recursive(head);
    traverse_recursive_with_address(head);
    // show(head);
    // show(temp1);
    // show(temp2);
}