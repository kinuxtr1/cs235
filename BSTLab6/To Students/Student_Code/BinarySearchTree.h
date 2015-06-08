#include "NodeInterface.h"
#include "BSTInterface.h"
#include "Node.h"
#pragma once
class BinarySearchTree : public BSTInterface 
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
	bool recAdd(NodeInterface* ptr, int newNodeValue); //TODO: NodeInterface will work like a node class right?
	bool recRemove(NodeInterface* ptr, int valueToRemove); 
	void InorderPredecessor(Node* n1, Node* n2); //n2 = the node chosen's left node; n1 = ptr ad n2 = ptr->left
	void eraseBST(NodeInterface* root);

private:
	NodeInterface* root;  // TODO: This might cause problems with other code
};


