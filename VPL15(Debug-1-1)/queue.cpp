#include "queue.h"

struct Node
{
	int key;
	Node *next;
};

Queue::Queue()
{
	// Inicializa com frente e calda sendo um mesmo nó e nulo
	this->front_ = this->back_ = 0;
}

void Queue::push(int k)
{
	Node *temp = new Node();
	temp->key = k;
	
	// Caso o back seja nulo isso significa que a fila está vazia então
	// o novo nó é adicionado a frente pois não existem outros nós na fila.
	if (this->back_ == 0) {
		this->front_ = this->back_ = temp;
	} else {
		this->back_->next = temp;
		this->back_ = temp;
	}
}

void Queue::pop()
{
	if (this->front_ == 0) throw EmptyException{};

	Node *temp = this->front_;
	this->front_ = this->front_->next;

	/* 
	Se depois da realocação do front o front for 0 isso significa que 
	a fila está vazia novamente e no próximo passo chamado após esse
	isso vai ser percebido e será jogado a exceção
	*/ 
	if (this->front_ == 0) this->back_ = 0;
	delete (temp);
}

int Queue::front() const {
	if (count() == 0) throw EmptyException{};
	return this->front_->key;
}

int Queue::back() const {
	if (count() == 0) throw EmptyException{};
	return this->back_->key;
}

int Queue::count() const {
	int count = 0;
	for (Node *temp = this->front_; temp != 0; temp = temp->next) {
		count += 1;
	}
	return count;
}
