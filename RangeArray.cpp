#include "RangeArray.h"

RangeArray::RangeArray(int l, int h):Array(h-l+1){
	low=l;
	high=h;
}

RangeArray::~RangeArray(){
}

int RangeArray::baseValue(){
	return low;
}

int RangeArray::endValue(){
	return high;
}

int& RangeArray::operator[](int k){
	int m=k-low;
	Array::operator[](m);
}

int RangeArray::operator[](int k)const{
	int m=k-low;
	Array::operator[](m);
}
