#ifndef QUEUE_H_
#define QUEUE_H_

#include "node.h"

template<class T> class Queue {

private:
    Node<T>* top;
    Node<T>* bottom;
    unsigned int elements;

public:

    Queue();
    ~Queue();

    void enqueue(T newElement);
    T dequeue();
    bool isEmpty();





};


template<class T> Queue<T>::Queue(){

    this->top = NULL;
    this->bottom = NULL;
    this->elements = 0;

}

template<class T> Queue<T>::~Queue(){
    while ( elements >= 1) {
        this->dequeue();
    }
}

template<class T> void Queue<T>::enqueue(T newElement){

    Node<T>* newNode = new Node<T>(newElement);

    if ( this->elements == 0 ) {
        this->top = newNode;
    } else {
        bottom->setNext(newNode);
    }

    this->bottom = newNode;
    this->elements++;

}

template<class T> T Queue<T>::dequeue(){

    T element;

    if ( this->elements > 0 ) {
        element = this->top->getElement();
        Node<T>* topToDelete = this->top;
        this->top = topToDelete->getNext();
        delete topToDelete;
        this->elements--;
    }

    return element;

}

template<class T> bool Queue<T>::isEmpty(){
    return (this->elements == 0);
}


#endif // QUEUE_H_
