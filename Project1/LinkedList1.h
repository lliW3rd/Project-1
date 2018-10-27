#include "pch.h"
#ifndef LINKLIST
#define LINKLIST

#include <iostream>
using std::ostream;

#include "Nodeboy.h"

class List
{
public:
	List();

	// List(const List & other);
	~List();

	bool empty() const;

	int size() const;
	double sum();

	void insertAsFirst(double x);
	// void insertAsLast(double x);

	double removeFirst();

	double getMax() const;
	double getMin() const;
	void clear();
	double getSum();
	int getSize();
	


private:
	// static Node * clone(Node *ptr);

	Node * first_;
	int size_;
	double sum_;
	double max_;


};

#endif
