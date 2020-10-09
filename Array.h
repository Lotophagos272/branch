#ifndef _ARRAY_
#define _ARRAY_

#include <iostream>

using namespace std;

class Array{
	protected:
		int* data;
		int len;
	public:
		Array(int size);
		~Array();
		int length();
		int & operator[](int i);
		int operator[](int i) const;
		void print();
};
#endif

