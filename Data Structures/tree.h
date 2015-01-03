#pragma once

#include "treeNode.h"

class tree
{
public:

	treeNode* p;
	treeNode* q;
	treeNode* w;
	treeNode* root;

	//Arbol binario menores a la izquierda
	void ABIPush(CString);
	CString ABIPop(CString);

	tree();
	~tree();
};

