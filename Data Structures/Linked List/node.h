// node.cpp class

class node {
	
	typedef double value_type;

	public:
		// constructer
		node(
		    const value_type& init_data = value_type(),
			    node* init_link = NULL
			)
		{
			m_data_field = init_data;
			m_link_field = init_link; 
		}

		// setters and getters
		void setLink(node * new_link) { m_link_field = new_link; }
		void setData(const value_type& new_data) { m_data_field = new_data; }

		value_type getData() const { return m_data_field; }
		const node * getLink() const { return m_link_field; }
		node * getLink() { return m_link_field; }

	
	private:
		value_type m_data_field;
		node* m_link_field;
};

void list_insert(node* previous_ptr, const node::value_type& entry);
void list_head_insert(node*& head_ptr, const node::value_type& entry);
void list_remove(node* previous_ptr);
void list_head_remove(node*& head_ptr);
void list_remove_duplicates(node* previous_ptr);
void list_clear(node*& head_ptr);
node* list_search(node* head_ptr, const node::value_type& target);