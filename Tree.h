#pragma once
#include <memory>
#include <vector>
#include <string>


template<class ItemType>
class Node
{
private:
	ItemType m_value;
	std::shared_ptr<Node<ItemType>>  m_right;
	std::shared_ptr<Node<ItemType>>  m_left;

public:
	Node() = delete;
	Node(ItemType val);
	void setLeft(std::shared_ptr<Node<ItemType>> nextNodePtr);
	void setRight(std::shared_ptr<Node<ItemType>> nextNodePtr);
	int getItem() const;
	std::shared_ptr<Node<ItemType>> getRight() const;
	std::shared_ptr<Node<ItemType>> getLeft() const;
	virtual ~Node();
	
};



template <class ITEM> 

class Tree : public Node
{

protected:

public:

    Tree();
	~Tree();

	void Insert(std::shared_ptr<Node<ITEM>>node)=0;
	std::shared_ptr<Node<ITEM>> Find(ITEM target);
	int Size();
	std::vector<std::string> GetAllAscending();
	void Clear();

	
};


