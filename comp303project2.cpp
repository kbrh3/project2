// comp303project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linked.h"
using namespace std;

int main()
{
	Linked dataList;
	

	//data list is a linked list that holds integers
// commands:
	//dataList.push_front(int); push int to front of list
	//dataList.push_back(int); push into onto back of list
	//dataList.insert();
	//returns integer size, sizeOfList();
	// dataList.pop_back(); pops integer off the back of the list
	//dataList.pop_front(); pops integer off the front of the list
	// empty(); returns true if list is empty
	// front(); returns value in headPtr
	// back(); returns value in tailPtr
	// insert(int index, int value); places a new node containing value at index given. places at end of list if index is out of bounds
	// remove(int index); removes node at index if valid, returns true. returns false if index is invalid
	// find(int x); looks for first instance of x in list, if not found returns size of list



	//initialized as 1,2,3,4

	dataList.push_front(2);
	dataList.push_front(1);
	dataList.push_back(3);
	dataList.push_back(4);
	dataList.insert(0, 0);
	cout<< dataList.find(0);
	cout << endl;
	dataList.remove(0);
	cout << dataList.find(0);
	cout << dataList.front();

	
	
}

