#pragma once

#include "node.h"

class list
{
public:

	node* p;
	node* q;
	node* w;
	node* root;

	//Lista Descendente Simple
	void LDSPush(CString);
	CString LDSPop(CString);

	//Lista Ascendente Circular Doble
	void LADCPush(CString);
	CString LADCPop(CString);

	list();
	~list();
};

