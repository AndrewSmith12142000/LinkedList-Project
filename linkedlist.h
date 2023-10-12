/*
 * your comment header here
 */
#ifndef LINKED_LIST_h
#define LINKED_LIST_h

# include "data.h"
# include <iomanip>
# include <string>
# include <stdlib.h>
# include <iostream>
# include <new>

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
  
    bool addNode(int, string*);
    bool deleteNode(int);
    bool getNode(int, Data*);
    void printList(bool = false);
    int getCount();
    

private:
	Node *head;
    bool addHead(int, string*);
    bool nodeCouple(bool, int, string*, Node*, Node*);
    bool deleting(Node*);
};

# endif