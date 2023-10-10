/*
 * your comment header here
 */

#include "linkedlist.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList()
{
    this->clearList();
}