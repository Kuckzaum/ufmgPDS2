#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <string>

struct Estudante {
  std::string nome;
  int matricula;
  float notas[5];

  float calcularRSG();
};

#endif

/*
#ifndef LIST_H
#define LIST_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


struct Node {
    int data;
    Node * next;
};

struct List {
    Node * head = nullptr;
    Node * tail = nullptr;

    void insertNode(int data);
    void removeNode(int data);
    void display();
};

#endif
*/