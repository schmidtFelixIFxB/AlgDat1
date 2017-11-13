/*
 * CursorList.hpp
 *
 *  Created on: 09.11.2017
 *      Author: schmi
 */

#ifndef CURSORLIST_HPP_
#define CURSORLIST_HPP_
template <class T> class CursorList{
	struct Node{
		T listElement;
		int previous;
		int next;
	};
	template <class D> class CursorIterator{

	};
	Node m_Array[10];
public:
	CursorList();
	typedef T value_type;
	typedef CursorIterator<T> iterator;
	bool empty() const;
	int size() const;
	T& front() const;
	void push_front(const T &);
	iterator begin() const;
	iterator end() const;
	iterator insert(iterator itr, const T& value);
	iterator erase(iterator start, iterator stop);
	iterator erase(iterator itr);
};




#endif /* CURSORLIST_HPP_ */
