#pragma once


#include <string>
#include <iostream>
#include <array>
#include <vector>
#include <memory>
#include "Node.h"

using namespace std;



template <class I> class BST
{
    protected:
        
    public:
        BST();
        //struct BST *newBST(I data);
        //BST(I val, BST * n_left, BST * n_right);
        void insert(std::shared_ptr<Node<I>> node);
        //I GetRight() const;
        //I GetLeft() const;
        //std::shared_ptr<Node<I>> GetRoot() const;
        std::shared_ptr<Node<I>> find(I target);
        int size();
        std::vector<std::string> GetAllAscending();
        void clearTree();
        ~BST();
        private:
        std::shared_ptr<Node<I>> root;
	    //std::shared_ptr<BST<I>> left;
        //std::shared_ptr<BST<I>> right;
	    
};

#include "BST.cpp"