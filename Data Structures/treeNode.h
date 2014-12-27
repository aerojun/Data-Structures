#pragma once
class treeNode
{
public:

	int data;

	treeNode* left;
	treeNode* right;

	//Threaded Tree
	bool leftChild;
	bool rightChild;

	treeNode();
	~treeNode();
};

