#include "node.cpp"

void list_head_insert(node*& head_ptr, const node::value_type& entry)
{
	head_ptr = new node(entry, head_ptr);
}

// add a node to the linked list
void list_insert(node* previous_ptr, const node::value_type& entry) 
{
	node *insert_ptr;					
	insert_ptr = new node(entry, previous_ptr->link());
	previous_ptr->set_link(insert_ptr);
}