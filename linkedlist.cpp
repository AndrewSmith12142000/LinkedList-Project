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

bool LinkedList::addNode(int id, string* data)
{
    bool success = false;

    if (id > 0 && !head)
    {
        success = this->addHead(id, data);
    }
    else if (id > 0 && head)
    {
        Node* current = head;
        Node* newNode = new Node;
        newNode->data.id = id;
        newNode->data.data = *data;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        while (current->next && id > current->data.id)
        {
            current = current->next;
        }

        if (id != current->data.id)
        {
            success = nodeCouple(success, id, data, current, newNode);
        }
    }
    return success;
}
