#include "BinarySearchTree.h"
#include <iostream>

using namespace std;


BinarySearchTree::BinarySearchTree()
{
}
BinarySearchTree::~BinarySearchTree()
{
}

bool BinarySearchTree::recAdd(NodeInterface* ptr, int newNodeValue){
	if (ptr->getData() == newNodeValue){
		return false;
	}
	if (ptr == NULL){
		ptr = new Node(newNodeValue);
	}
	if (newNodeValue < ptr->getData()){ //TODO Check and see if this is pointing to the right thing
		recAdd(ptr->getLeftChild(), newNodeValue);
	}
	else if (newNodeValue > ptr->getData()){ //TODO Check and see if this is pointing to the right thing
		recAdd(ptr->getRightChild(), newNodeValue);
	}
	return true;
}


bool BinarySearchTree::recRemove(NodeInterface* ptr, int valueToRemove){
	if (ptr == NULL) {
		cout << "The value was not found in the Binary Search Tree " << endl;
		return false;
	}
	if (valueToRemove < ptr->getData()){ //TODO Check and see if this is pointing to the right thing
		recAdd(ptr->getLeftChild(), valueToRemove);
	}
	else if (valueToRemove > ptr->getData()){ //TODO Check and see if this is pointing to the right thing
		recAdd(ptr->getRightChild(), valueToRemove);
	}
	if (ptr->getData() == valueToRemove){
		//If there is no child
		if (ptr->getLeftChild() == NULL && ptr->getRightChild() == NULL){
			//Set a temp on the valueToRemove
			NodeInterface* temp = ptr;
			ptr = NULL;
			delete temp;
		}
		// If there is only a left child
		else if (ptr->getRightChild() == NULL && ptr->getLeftChild() != NULL){
			NodeInterface* temp = ptr;                                                  //TODO: I dont think i'm setting the temps correctly
			ptr = ptr->getLeftChild();
			delete temp;
		}
		// If there is only a right child
		else if (ptr->getRightChild() != NULL && ptr->getLeftChild() == NULL){
			NodeInterface* temp = ptr;                                                 
			ptr = ptr->getRightChild();
			delete temp;
		}
		// If there are children on both right and left
		else if (ptr->getRightChild() != NULL && ptr->getLeftChild() != NULL){
			InorderPredecessor((Node*)ptr, (Node*)ptr->getLeftChild());
		}
	}
	return true;
}


void BinarySearchTree::InorderPredecessor(Node* n1, Node* n2){
	if (n2->getRightChild() != NULL){
		InorderPredecessor(n1, (Node*)n2->getRightChild());
	}
	n1->setData(n2->getData());
	NodeInterface* temp = n2;
	n2 = (Node*)n2->getLeftChild();
	delete temp;
}



NodeInterface* BinarySearchTree::getRootNode(){
	return root;
}
	/*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
	*/

bool BinarySearchTree::add(int data){
	return recAdd(root, data);                                            //TODO: How would i go aboutchanging these to Node* but returned NOdeInterface*
}
	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/

bool BinarySearchTree::remove(int data){
	return recRemove(root, data);
}
	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/

void BinarySearchTree::clear(){
	eraseBST(root);
}
	//Removes all Nodes from the tree, resulting in an empty tree.

void BinarySearchTree::eraseBST(NodeInterface* root){
	if (root->getLeftChild() != NULL)eraseBST(root->getLeftChild());
	if (root->getRightChild() != NULL)eraseBST(root->getRightChild());
	delete root;
}

