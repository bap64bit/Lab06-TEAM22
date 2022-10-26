#include <iostream>
#include "Node.h"

template<class ItemType>
Node<ItemType>::Node(ItemType val) : m_value(val), m_right(nullptr), m_left(nullptr)
{

}


template<class ItemType>
void Node<ItemType>::setRight(std::shared_ptr<Node<ItemType>> nextNodePtr)
{
	m_right = nextNodePtr;
}

template<class ItemType>
void Node<ItemType>::setLeft(std::shared_ptr<Node<ItemType>> nextNodePtr)
{
	m_left = nextNodePtr;
}

template<class ItemType>
int Node<ItemType>::getItem() const
{
	return m_value;
}

template<class ItemType>
std::shared_ptr<Node<ItemType>>  Node<ItemType>::getRight() const
{
	return m_right;
}

template<class ItemType>
std::shared_ptr<Node<ItemType>>  Node<ItemType>::getLeft() const
{
	return m_left;
}

template<class ItemType>
Node<ItemType>::~Node()
{
	std::cout << "Deleting node with value " << m_value << std::endl;
	
	// you can recursively handle this which would require some code
	// Otherwise you need to delete each node individuall in the owner of the Nodes (i.e. the LinkedList)
}





