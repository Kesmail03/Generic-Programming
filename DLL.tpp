//DLL.tpp
#include<iostream>
using std::cout;
using std::endl;


template <typename TYPE>
node<TYPE>::node():next(nullptr),previous(nullptr)
{
}

template <typename TYPE>
node<TYPE>::node(const TYPE & src)
{
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

/*
template <typename TYPE>
TYPE node<TYPE>::get_data() const
{
	return data;
}
*/

template <typename TYPE>
void node<TYPE>::display() const
{
}






















































