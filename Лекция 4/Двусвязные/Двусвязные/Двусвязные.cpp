#include <iostream>

using namespace std;

struct Node 
{
    int data;
    Node* next_ptr = nullptr;
    Node* prev_ptr = nullptr;
};

struct List
{
    Node* head = nullptr;
    Node* tail = nullptr;
};

void insert(List &list, const int& data, const int& index) 
{
    Node* new_node = new Node;
    new_node->data = data;

    if (list.head == nullptr)
    {
        list.head = new_node;
        list.tail = new_node;
        return;
    }

    int counter = 0;
    Node* current = list.head;

    while (counter != index)
    {
        current = current->next_ptr;
        counter++;
    }

    new_node->prev_ptr = current;

    if (current->next_ptr != nullptr)
    {
        new_node->next_ptr = current->next_ptr;
        current->next_ptr->prev_ptr = new_node;
    }

    current->next_ptr = new_node;
    list.tail = new_node;
}

int main()
{
    List list1, List2;

    for (int i = 0; i < 7; i++)
        insert(list1, i * i, i);

    for (int i = 0; i < 7; i++)
        insert(List2, i * i, i - 1);


}