#pragma once

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


struct Node {
	int data;
	Node* nextPtr;
	Node* previousPtr;
};

class Linked {
private:
	Node* headPtr;
	Node* tailPtr;
	int size;

public:
	Linked();
	Linked(int d);
	int getSize() { return size; }
	void push_front(int d);
	void push_back(int d);
	void pop_back();
	void pop_front();
	int sizeOfList();
	bool empty();
	int front();
	int back();
	void insert(int index, int value);
	//places a new node containing value at index given. places at end of list if index is out of bounds
	bool remove(int index);
	//removes node at index if valid, returns true. returns false if index is invalid
	int find(int x);
	//looks for first instance of x in list, if not found returns size of list
};