#include <iostream>
#include "Tree.h"
#include <memory>
#include <vector>
#include <string>

//Node functions, ignore them
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




//BST
//Start here




template <class ITEM>
Tree <ITEM>::Tree(){
    
}

template <class ITEM>
void Tree <ITEM>::Insert(std::shared_ptr<Node<ITEM>>node, ITEM key){
    
    if (node==NULL)
	{
		std::shared_ptr<ITEM> node(new ITEM(key));
		std::shared_ptr<ITEM> node;
	}
	

}


template <class ITEM>
std::shared_ptr<Node<ITEM>> Tree <ITEM>::Find(ITEM val){




}


template <class ITEM>
int Tree <ITEM>::Size(){




}


template <class ITEM>
void Tree <ITEM>::Clear(){




}



template <class ITEM>
std::vector<std::string> Tree <ITEM>::GetAllAscending(){

}

template <class ITEM>
Tree <ITEM>::~Tree(){
    
}