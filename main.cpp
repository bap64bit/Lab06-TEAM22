#include <iostream>
#include <memory>
#include "Node.h"
#include "BST.h"

int main() {
  std::shared_ptr<Node<int>> node  = std::make_shared<Node<int>>(5);

  BST<int> bst;
} 