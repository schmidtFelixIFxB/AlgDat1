/*
 * CursorList.cpp
 *
 *  Created on: 09.11.2017
 *      Author: schmi
 */
#include <iostream>
#include "CursorList.hpp"

template <class T>
CursorList<T>::CursorList(){
	for(i = 0; i < 10; i++){
		m_array[i] = Node;
	}
}



