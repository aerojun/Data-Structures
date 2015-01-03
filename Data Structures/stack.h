#pragma once

#include "node.h"

class stack
{
public:

	node* p;
	node* q;
	node* root;

	//Pila Sencilla No Circular Normal
	void SNNPush(CString);
	CString SNNPop();

	//Pila Sencilla No Circular inversa
	void SNIPush(CString);
	CString SNIPop();

	//Pila Doble Circular Normal
	void DCNPush(CString);
	CString DCNPop();

	stack();
	~stack();
};

