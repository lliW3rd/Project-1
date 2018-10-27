#include "pch.h"
#include "LinkedList1.h"

#include <utility>

List::List() : first_(NULL), size_(0), sum_(0), max_(0)
{

}

List::~List() {
	while (!empty())
	{
		removeFirst();
	}
	size_ = 0;

}

bool List::empty() const
{
	return first_ == NULL;
}

int List::size() const
{
	if (!empty())
	{
		int size1 = 0;
		Node * temp = first_;
		while (temp != NULL)
		{
			temp = temp->next_;
			size1++;
		}
		return size1;
	}
	return 0;
}

double List::sum()
{
	if (!empty())
	{
		double sum_ = 0;
		Node * temp = first_;
		while (temp != NULL)
		{
			sum_ = sum_ + temp->data_;
			temp = temp->next_;
		}
		return sum_;
	}
	return 0.0;
}

void List::insertAsFirst(double x)
{
	size_ = size_ + 1;
	sum_ = sum_ + x;
	first_ = new Node(x, first_);
}

double List::removeFirst()
{
	double item = first_->data_;
	Node * tempPtr = first_;
	first_ = first_->next_;
	size_ = size_ - 1;
	sum_ = sum_ - item;
	delete tempPtr;
	return item;
}

double List::getMax() const
{
	
	if (!empty())
	{
		double max_ = 0.0;
		Node * temp1 = first_;
		while (temp1 != NULL)
		{
			if (temp1->data_ >= max_) {
				max_ = temp1->data_;
				temp1 = temp1->next_;
				
			}
			else
			{
				temp1 = temp1->next_;
			}
		}
		return max_;
	}

	return 0.0;
}

double List::getMin() const
{
	if (!empty())
	{
		double min_ = 0.0;
		Node * temp1 = first_;
		min_ = temp1->data_;
		while (temp1 != NULL)
		{
			if (temp1->data_ < min_) {
				min_ = temp1->data_;
				temp1 = temp1->next_;

			}
			else
			{
				temp1 = temp1->next_;
			}
		}
		return min_;
	}
	return 0.0;
}

void List::clear()
{
	while (!empty()) {
		removeFirst();
	}
}

double List::getSum()
{
	return sum_;
}

int List::getSize()
{
	return size_;
}
