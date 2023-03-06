#include "Linked.h"

Linked::Linked() {
	headPtr = nullptr;
    tailPtr = nullptr;
    size = 0;
}
Linked::Linked(int d) {

	Node* tempPtr = new Node;
    tempPtr->data = d;
	tempPtr->nextPtr = nullptr;
    tempPtr->previousPtr = nullptr;
    headPtr = tempPtr;
    tailPtr = tempPtr;
    size = 1;


}


//end of constructors
void Linked::push_front(int d) {
    Node* newNode = new Node;
    newNode->data = d;
    newNode->nextPtr = nullptr;
    newNode->previousPtr = nullptr;
    size = size + 1;
    if (headPtr == nullptr) {
        headPtr = newNode;
        tailPtr = newNode;
    }
    else {
        Node* temp = headPtr;
        headPtr = newNode;
        temp->previousPtr = newNode;
        headPtr->nextPtr = temp;
        //delete temp;


    }
}

void Linked::push_back(int d) {
    Node* newNode = new Node;
    newNode->data = d;
    newNode->nextPtr = nullptr;
    size = size + 1;
    if (tailPtr == nullptr) {
        headPtr = newNode;
        tailPtr = newNode;
    }
    else {
        Node* temp = tailPtr;
        tailPtr = newNode;
        temp->nextPtr = newNode;
        tailPtr->previousPtr = temp;
        //delete temp;


    }
}

void::Linked::pop_back() {

    if (tailPtr != nullptr)
    {
        Node* temp = tailPtr;
        tailPtr->previousPtr = tailPtr;
        tailPtr->nextPtr = nullptr;
        delete temp;
        size = size - 1;

    }


}

void::Linked::pop_front() {

    if (headPtr != nullptr)
    {
        Node* temp = headPtr;
        headPtr->nextPtr= headPtr;
        headPtr->previousPtr = nullptr;
        delete temp;
        size = size - 1;

    }


}

int::Linked::sizeOfList() {
    return size;
}

bool::Linked::empty() {
    if (headPtr == nullptr) { return true; }
    else { return false; }
}

int::Linked::front() {
    if (empty()) { return 0; }
    else { return headPtr->data; }
}

int::Linked::back() {
    if (empty()) { return 0; }
    else { return tailPtr->data; }
}

void::Linked::insert(int index, int value) {

    if (index >= (size - 1)) { push_back(value); }
    else {
        if (index == 0) { push_front(value); }
        else{
        Node* p = new Node;
        p->data = value;
        Node* temp = headPtr;
        //declare a new node to hold value
        //creat a temp node to hold the pointer at i

        
            for (int i = 0; i < size; i++) {

                if (i == index) {
                    p->nextPtr = temp->nextPtr;
                    temp->nextPtr = p;
                    p->previousPtr = temp;
                    size = size + 1;
                    break;
                    //assign a temp to hold the pointer after i
                    //1st temp has next pointer pointing to new
                    //2nd temp has previous pointer pointing to last
                    //break from loop


                }
                else if (temp->nextPtr != nullptr) { temp = temp->nextPtr; }
                //increment pointer here
            }


        }
    }
}

bool::Linked::remove(int index) {
    if (index == 0) { pop_front(); }
    else if (index <= (size - 1)) {
        Node* temp = headPtr;
        //create temp pointer to hold onto node at index
        for (int i = 0; i < size; i++) {

            if (i == index) {
                Node* temp2 = temp->nextPtr;
                //create 2temp to hold onto next pointer
                temp2->previousPtr = temp->previousPtr;
                //connect twotemp to node before temp
                delete temp;
                //temp = null, delete temp
                size = size - 1;
                
                return true; }//removes value at index, needs for loop to find the spot 
            //increment node to next
            temp = temp->nextPtr;
        }
    }
    else { return false; }


}

int::Linked::find(int x) {
    Node* temp = headPtr;
    
    //for loop to look through to first instance of x, returns size if you can't find it
    for (int i = 0; i < size; i++) {
        

        //check node data
        if (temp->data == x) { return i; }
        else if (temp->nextPtr != nullptr) {temp = temp->nextPtr; }
               
    }
    //delete temp?
    //if you cant find it
    return size;
    
}