#ifndef NODE_H_
#define NODE_H_

#ifndef NULL
#define NULL 0
#endif

template<class T> class Node {

private:
    T element;
    Node<T>* next;

public:

    Node(T newElement){
        this->element = newElement;
        this->next = NULL;
    }

    T getElement(){
        return element;
    }

    void setElement(T newElement){
        this->element = newElement;
    }

    Node<T>* getNext(){
        return this->next;
    }

    void setNext(Node<T>* newNext){
        this->next = newNext;
    }

};

#endif // NODE_H_
