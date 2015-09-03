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