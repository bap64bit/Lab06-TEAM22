#include <iostream>
#include "Node.h"




template <class I>
BST<I>::BST(){
    
}

template <class I>
void BST<I>::insert(std::shared_ptr<Node<I>>node){
    
    if (root==NULL)
	{
		root=node;
        
	}

    else{
        auto tt =root->getLeft();
        
    }
	

}


template <class I>
std::shared_ptr<Node<I>> BST <I>::find(I val){




}


template <class I>
int BST <I>::size(){




}


template <class I>
void BST <I>::clearTree(){




}



template <class I>
std::vector<std::string> BST <I>::GetAllAscending(){

}

template <class I>
BST <I>::~BST(){
    
}


