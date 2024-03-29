#include <iostream>

using namespace std;

template<typename T>
struct Node
{
    T data;
    Node<T>* next;
};

template<typename T>
struct Queue
{
    int size;
    Node<T>* head;
    Node<T>*tail;
};

template<typename T>
void init_queue(Queue<T>& q, const T& value)
{
    Node<T>* new_node = new Node<T>();
    new_node->data = value;
    q.head = new_node;
    q.tail = new_node;
    q.size = 1;
}

template<typename T>
void push(Queue<T>& q, const T& value)
{
    Node<T>* new_node = new Node<T>();
    q.size++;
    new_node->data = value;
    new_node->next = nullptr;
    q.tail.next = new_node;
    q.tail = new_node;
}

template<typename T>
void Delete_Elemet(Queue<T>& q, T k)
{
    int i = 1;

    while (i <= q.size)
    {
        if (q.head->data == k)
        {
            pop(q);
        }
        else
        {
            push(q, q.head->data);
            pop(q);
            i++;
        }
    }
}

template<typename T>
void pop(Queue<T>& q)
{
    Node<T>* tmp = q.head;
    q.head = q.head->next;
    q.size--;
    delete tmp;
}



int main()
{

}
