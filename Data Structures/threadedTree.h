#pragma once

#include "treeNode.h"
class threadedTree
{
public:

	treeNode* p;
	treeNode* q;
	treeNode* w;
	treeNode* root;

	//Usados cuando el nodo a Eliminar tiene 2 nodos hijos
	bool nodoEliminar = false;
	treeNode* raizBusqueda = NULL;
	treeNode* anteriorBusqueda = NULL;


	//Arbol binario hilvanado menores a la izquierda
	void ABHPush(CString);
	CString ABHPop(CString);

	threadedTree();
	~threadedTree();
};

