#include"game.h"
#include<memory>
#ifndef DLL_H
#define DLL_H

using std::unique_ptr;

template <typename TYPE>
class node
{
	public:
		typedef unique_ptr<node<TYPE>> * node_ptr_type;

		node();
		node(const TYPE & src);
		node_ptr_type & get_next();
		node_ptr_type & get_previous();
		//TYPE get_data() const;
		void display() const;


	protected:
		activity * data;
		node_ptr_type next;
		node_ptr_type previous;


};


template <typename TYPE>
class DLL
{
	public:
		//typedef node<TYPE> node_type;
		typedef node<TYPE> * node_ptr;
		//typedef unique_ptr<node<TYPE>> * node_ptr;


		DLL();
		DLL(const DLL & src);
		
		//DLL<TYPE> & operator=(const DLL<TYPE> & src);
		//friend DLL<TYPE> operator+(DLL);adds one node at the end;
		//friend DLL<TYPE> operator+=();traverses the list forwards

		


	protected:
		node_ptr head;
		node_ptr tail;

};

#include"DLL.tpp"
#endif
