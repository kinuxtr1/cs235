#include "NodeInterface.h"
#include "Node.h"
#pragma once
class BinarySearchTree
{
public:
	//Please note that the class that implements this interface must be made
	//of objects which implement the NodeInterface

	BinarySearchTree();
	~BinarySearchTree();
	NodeInterface * getRootNode();
	bool add(int data);
	bool remove(int data);
	void clear();
	bool recAdd(Node*& ptr, int newNodeValue); //TODO: NodeInterface will work like a node class right?
	bool recRemove(Node*& ptr, int valueToRemove); 
	void InorderPredecessor(Node*& n1, Node*& n2); //n2 = the node chosen's left node; n1 = ptr ad n2 = ptr->left
	void eraseBST(Node* root);

private:
	Node* root;  // TODO: This might cause problems with other code
};

