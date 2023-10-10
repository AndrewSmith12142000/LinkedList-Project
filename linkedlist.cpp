/*
 * your comment header here
 */

#include "linkedlist.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList()
{
    this->clearList();
}

bool LinkedList::addHead(int id, string* data)
{
    head = new Node;
    head->data.id = id;
    head->data.data = *data;
    head->next = nullptr;
    head->prev = nullptr;
    return true;
}