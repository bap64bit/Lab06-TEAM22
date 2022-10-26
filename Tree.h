#pragma once

#include <memory>
#include <vector>
#include <string>
#include "Node.h"


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

#include "Tree.cpp"

