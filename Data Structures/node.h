#pragma once

#include "treeNode.h"
class node
{
public:

	int data;

	node* next;
	node* prev;

	treeNode* treeData;
	node();
	~node();
};

