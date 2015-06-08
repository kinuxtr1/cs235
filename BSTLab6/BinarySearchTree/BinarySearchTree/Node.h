#pragma once
#include "NodeInterface.h"


class Node {
public:
	Node();
	Node(int initial_value);
	~Node();
	int getData();
	NodeInterface* getLeftChild();
	NodeInterface* getRightChild();
	//Node<T>* find(T value);
	//Node<T>* findParent(T value);

private:
	int data;
	NodeInterface* left;   // TODO: SHould this be a NodeInterface pointer??
	NodeInterface* right;

	/*
	Node() {
		next = NULL;
	}
	Node(int initial_value) {
		value = initial_value;
		next = NULL;
	}
	~Node() {
		next = NULL;
	}
	int value;
	Node* next;
	*/
};



/*Node<T>* List<T>::find(T value) {
  if(!head) return NULL;
  Node<T> *node = head;
  bool found = false;
  if(node->value == value) {
    found = true;
  }else{
    while(node->next != NULL)
      {
	if(node->value == value) {
	  found = true;
	  break;
	}
	node = node->next;
      }
    if(node->value == value) {
      found = true;
    }
  }
  if(!found) node = NULL;
  return node;
}


template <class T>
Node<T>* List<T>::findParent(T value) {
  if(!head) return NULL;

  bool found = false;
  Node<T> *node = head;
  Node<T> *parent = NULL;
  while(node)
    {
      if(node->value == value) {
	found = true;
	break;
      }
      parent = node;
      node = node->next;
    }
  if(!found) parent = NULL;
  return parent;
}
*/

/*
struct node 
{
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* newNode(int data)
{
	struct node* node = (struct node*)
		malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return(node);
}
*/