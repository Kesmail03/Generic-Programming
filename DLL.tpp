//DLL.tpp
#include<iostream>
using std::cout;
using std::endl;


template <typename TYPE>
node<TYPE>::node():next(nullptr),previous(nullptr)
{
}

template <typename TYPE>
node<TYPE>::node(const TYPE & src):next(nullptr),previous(nullptr)
{
	data = src;
}

template <typename TYPE>
typename node<TYPE>::node_ptr_type & node<TYPE>::get_next()
{
	return next;
}

template <typename TYPE>
typename node<TYPE>::node_ptr_type & node<TYPE>::get_previous()
{
	return previous;
}


template <typename TYPE>
TYPE node<TYPE>::get_data() const
{
	return data;
}


template <typename TYPE>
void node<TYPE>::display() const
{
	std::cout << data;
}


template <typename TYPE>
DLL<TYPE>::DLL():head(nullptr),tail(nullptr)
{

}

template <typename TYPE>
DLL<TYPE>::DLL(const DLL & src)
{

}


template <typename TYPE>
int DLL<TYPE>::add(const TYPE & data)
{
	node<TYPE> * temp = new node<TYPE>(data);
	if(!head)
	{
		head = temp;
		tail = temp;
		return 1;
	}
	tail->get_next() = temp;
	temp->get_previous() = tail;
	tail = temp;
	return 1;

}

template <typename TYPE>
int DLL<TYPE>::remove()
{
	if(!head)
		return 0;
	if(!head->get_next())
	{
		delete head;
		head = nullptr;
		tail = nullptr;
		return 1;
	}
	tail = tail->previous;
	delete tail->get_next();
	return 1;
}



template <typename TYPE>
int DLL<TYPE>::display()
{
	if(!head)
		return 0;
	return display(head);

}

template <typename TYPE>
int DLL<TYPE>::display(node_ptr head)
{
	if(!head)
		return 0;
	cout<<head->get_data()<<endl;
	return display(head->get_next());


}






