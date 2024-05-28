#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

template<class T>
class Queue
{
    Node<T>* head;
    Node<T>* end;
    int count = 0;

public:
    bool IsEmpty() { return count == 0; }

    T Top() { return end->GetValue(); }

    T Dequeue()
    {
        if (count == 0)
        {
            throw std::out_of_range("Queue is empty");
        }

        count--;
        T temp = head->GetValue();

        if (count == 0) 
        {
            delete head;
            head = nullptr;
            end = nullptr;
        }
        else 
        {
            Node<T>* tempNode = head;
            head = head->GetnextRight();
            delete tempNode;
            head->SetnextLeft(nullptr);
        }

        return temp;
    }

    void Enqueue(T value)
    {
        count++;
        Node<T>* newnode = new Node<T>(value);

        if (count == 1) 
        {
            head = newnode;
            end = newnode;
        }
        else
        {
            end->SetnextRight(newnode);
            newnode->SetnextLeft(end);
            end = newnode;
        }
    }
};
