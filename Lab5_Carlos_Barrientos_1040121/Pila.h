#pragma once
using namespace System;

class Pila
{
	struct Node
	{
		int data;
		Node* next;
		char color;//para el color de la carta
	};

private:
	Node* head = nullptr;

public:
	void Push(int item, char tipo) {
		Node* nuevoNodo = new Node();
		nuevoNodo->data = item;
		nuevoNodo->color = tipo;
		if (head == nullptr) {
			head = nuevoNodo;
		}
		else {
			Node* nodoActual = head;
			while (nodoActual->next != nullptr)
			{
				nodoActual = nodoActual->next;
			}
			nodoActual->next = nuevoNodo;
		}
	}

	int Count() {
		int cantidadNodos = 0;
		for (Node* i = head; i != nullptr; i = i->next) {
			cantidadNodos++;
		}
		return cantidadNodos;
	}

	int GetNumber(int index) {
		if (index >= 0 && index < Count()) {
			Node* nodoActual = head;
			int posicion = 0;
			while (posicion < index)
			{
				nodoActual = nodoActual->next;
				posicion++;
			}
			return nodoActual->data;
		}
	}

	char GetColor(int index) {
		if (index >= 0 && index < Count()) {
			Node* nodoActual = head;
			int posicion = 0;
			while (posicion < index)
			{
				nodoActual = nodoActual->next;
				posicion++;
			}
			return nodoActual->color;
		}
	}

	bool Contains(int item) {
		Node* nodoActual = head;
		while (nodoActual != nullptr && nodoActual->data != item)
		{
			nodoActual = nodoActual->next;
		}
		if (nodoActual != nullptr)
		{
			if (nodoActual->data == item)
			{
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}

	int IndexOf(int item) {
		Node* nodoActual = head;
		int posicion = 0;
		while (nodoActual != nullptr && nodoActual->data != item)
		{
			nodoActual = nodoActual->next;
			posicion++;
		}
		if (nodoActual == nullptr) {
			posicion = -1;
		}
		return posicion;
	}

	int LastIndexOf(int item) {
		Node* nodoActual = head;
		int posicion = 0, index = 0;
		while (nodoActual != nullptr)
		{
			if (nodoActual->data == item) {
				index = posicion;
			}
			nodoActual = nodoActual->next;
			posicion++;

		}
		return index;
	}

	void PopOf(int index) {
		Node* nodoActual = head;
		if (Count() != 0) {
			if (Count() == 1 || index == 0)
			{
				head = head->next;
			}
			else if (index >= Count()) {
				Node* anterior = head;
				nodoActual = anterior->next;
				while (nodoActual != nullptr)
				{
					anterior = nodoActual;
					nodoActual = nodoActual->next;
				}
				anterior->next = nodoActual->next;
			}
			else {
				Node* nodoAnterior = head;
				nodoActual = nodoAnterior->next;
				int posicion = 1;
				while (nodoActual != nullptr && posicion < index)
				{
					nodoAnterior = nodoActual;
					nodoActual = nodoActual->next;
					posicion++;
				}
				nodoAnterior->next = nodoActual->next;
			}
		}
	}



};

