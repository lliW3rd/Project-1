#include "pch.h"
#ifndef NODEBOY
#define NODEBOY

#include <iostream>
using std::cout;
using std::endl;

class Node
{
public:

	double data_;
	Node * next_;
public:
	// Constructor
	Node(double entry, Node * next);
	// Destructor
	~Node();
private:
	Node();

};

#endif


