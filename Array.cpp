#include "Array.h"

Array::Array(int size){
	if(size<0)cout<<"branch ERROR Array size must be greater than 0"<<endl;
	else {
		data = new int[size];
		len=size;
	}
}

Array::~Array(){
}

int Array::length(){
	return len;
}

int& Array::operator[](int i){
	static int tmp;
	if (0<=i && i<len){	
		return data[i];
	}
	else{
		cout<<"Array bound error!"<<endl;
		return tmp;
	}
}

int Array::operator [](int i) const{
	if(0<=i && i<len){
		return data[i];
	}
	else{
		cout<<"Array bound error!"<<endl;
		return 0;
	}
}

void Array::print(){
	cout<<"[";
	for(int j=0;j<len;j++){
		cout<<" "<<data[j];
	}
	cout<<"]"<<endl;
}
