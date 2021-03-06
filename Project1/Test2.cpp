
#include "pch.h"
#include <iostream>
#include <string>
#include "LinkedList1.h"
using std::string;
using std::stoi;
using std::cout;
using std::endl;
using std::cin;

double getweeksum(List x[7]) {
	double weeksum = 0;
	for (int i = 0; i < 7; i++) {
		weeksum = weeksum + x[i].getSum();
	}
	return weeksum;
	
	
}
int getweekcount(List x[7]) {
	int weekcount = 0;
	for (int i = 0; i < 7; i++) {
		weekcount = weekcount + x[i].getSize();
	}
	return weekcount;
}
double getweekMax(List x[7]) {
	double weekmax_ = 0;
	for (int i = 0; i < 7; i++) {
		if (x[i].getMax() > weekmax_) {
			weekmax_ = x[i].getMax();
		}
		else {
			weekmax_ = weekmax_;
		}
	}
	return weekmax_;
}

double getweekMin(List x[7]) {
	double weekmin_ = x[0].getMin();
	for (int i = 0; i < 7; i++) {
		if (x[i].getMin() < weekmin_) {
			weekmin_ = x[i].getMin();
		}
		else {
			weekmin_ = weekmin_;
		}
	}
	return weekmin_;
}
int main()
{
	int lmaoxdrawr=0;
	double bsl;
	float min = 0;
	float max = 0;
	float temp = 0;
	int count = 0;
	string holder;
	bool done = false;
	// List time :D
	List aryList[14];
	List week1[7];
	List week2[7];
	List tempList;
	List holderList;
	double week1sum = 0;
	double week1max = 0;
	double week1size = 0;
	double week1min = 0;
	int count2 = 0;

	// Initialize tempList into 1st index in aryList
	


	cout << "Input Blood Sugar Levels: " << endl;
	while (!done) {

		cin >> holder;

		if (holder == "D" || holder == "Day") {
			cout << "Daily Summary:" << endl;
			if (!holderList.empty()) {
				cout << "Data goes here" << endl;
				cout << "Sum: " << holderList.sum() << endl;
				// cout << "Sum: " << week1[count].sum() << endl;
				// cout << "Count: " << week1[count].size() << endl;
				// cout << "Max: " << week1[count].getMax() << endl;
				// cout << "Min: " << week1[count].getMin() << endl;
			}
			else {
				cout << "No Data" << endl;
			}

		}
		else if (holder == "W" || holder == "Week") {
			cout << "Weekly Summary" << endl;
			cout << getweeksum(week1) << endl;
			cout << getweekcount(week1) << endl;
			cout << getweekMax(week1) << endl;
			cout << getweekMin(week1) << endl;

			
			
			
			// find a way to print out all the days with their values here
		}
		else if (holder == "N" || holder == "Next") {
			cout << "Next Day: " << endl;
			// clear holder list here
			week1[count] = holderList;
			// cout << week1[0].sum() << endl;
			count++;
			holderList.clear();
			
			// increment day / go to next day
		}
		// temp func to exit while loop
		else if (holder == "F") {
			done = true;
		}

		else {
			bsl = stoi(holder.c_str());
			if (bsl <= 0) {
				// silently ignore values less than or equal to 0
			}
			else {
				holderList.insertAsFirst(bsl);
				week1[count] = holderList;
				
				
				
				
			}

		}
	}
	return 0;
}