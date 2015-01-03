#pragma once

#include "node.h"
class queue
{
public:

	node* p;
	node* q;
	node* root;
	node* top;

	//Cola Sencilla No Circular Normal 1 variable
	void CSNNPush(CString);
	CString CSNNPop();

	//Cola Sencilla No Circular Normal 2 variables
	void CSNNPush2(CString);
	CString CSNNPop2();

	//Cola Doble Circular Normal 1 variable
	void CDCNPush(CString);
	CString CDCNPop();

	queue();
	~queue();
};

