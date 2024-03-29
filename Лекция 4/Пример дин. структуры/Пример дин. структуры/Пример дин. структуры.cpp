#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* ptr = nullptr;
};

struct List{
	Node* head_node = nullptr;
	Node* tail_node = nullptr;
};

void PushBack(List& list, const int& data) 
{
	Node* new_node = new Node;
	new_node->data = data;

	if (list.head_node == nullptr)
	{
		list.head_node = new_node;
		list.tail_node = new_node;
	}
	else
	{
		list.tail_node->ptr = new_node;
		list.tail_node = new_node;
	}

	delete new_node;
}

void poFront(List& list) 
{
	if (list.head_node == nullptr)
		return;

	Node* remove = list.head_node;

	list.head_node = list.head_node->ptr;

	if (remove == list.tail_node)
		list.tail_node = nullptr;

	delete remove;
}

int main()
{
	List list;

	for (int i = 0; i != 7; i++)
		PushBack(list, i * i);

		Node* cur_node = list.head_node;

		while (cur_node != list.tail_node)
		{
			cout << cur_node->data << endl;
			cur_node = cur_node->ptr;
		}
}