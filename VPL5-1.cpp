#include "VPL5.hpp"

float Estudante::calcularRSG() {
    float sum = 0;
    for(int i=0;i<5;i++) {
        sum += this->notas[i];
    }
    return sum/5;
}


/*
void List::insertNode(int data) {
    Node *aux = new Node;
    aux->data = data;
    aux->next = nullptr;

    if (head == nullptr) {
        head = aux;
        tail = aux;
    } else {
        tail->next = aux;
        tail = aux;
    }
}

void List::removeNode(int data) {
    Node *current = head;
    Node *previous = nullptr;
    while (current != nullptr) {
        if (current->data == data) {
            if (previous == nullptr) { 
                head = current->next;
            } else if (current->next == nullptr) { //TAIL
                previous->next = nullptr;
                tail = previous;
            } else {
                previous->next = current->next;
            }
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

void List::display() {
    Node * aux=head;
    while(aux!=nullptr){
        cout<<aux->data<<"\t";
        aux = aux->next;
    }
    cout<<endl;
}

*/