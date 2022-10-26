#include <string>
#include <array>

template <class ItemType>
class IStack {
public:
	///Returns true if empty, otherwise false
	virtual bool isEmpty() const = 0;
	/// Adds a value to the Stack.  Returns true if able to add, otherwise false
	virtual bool push(const ItemType & val) = 0;
	/// removes a value from the stack.   Feturns true if able to remove an element, otherwise false
	virtual bool pop() = 0;
	//If the ADT is empty throw an exception indicating this, otherwise returns top of stack
	virtual int peek() const = 0;
	// outputs contents to a string
	virtual std::ItemType toString() const = 0;
	
protected:
	static const int STACK_SIZE=4;

};


template <class ItemType>
class ArrayBasedStack : IStack {
public:
	ArrayBasedStack(void);
	virtual ~ArrayBasedStack();
	bool isEmpty() const override;
	bool push(const ItemType & val) override;
	bool pop() override;
	//If the ADT is empty throw an exception indicating this
	int peek() const override;
	std::ItemType toString() const override;
private:
	
	std::array<int,STACK_SIZE> arrstack={};	
	ItemType arrstack_top=-1;

};

template <class ItemType>
class IQueue {
public:
	///Returns true if empty, otherwise false
	virtual bool isEmpty() const = 0;
	// Adds a value to the Q.  Returns true if able otherwise false
	virtual bool enQueue(const std::ItemType &val) = 0;
	// remove a value to the Q.  Returns true if able otherwise false
	virtual bool deQueue() = 0;
	//If the ADT is empty throw an exception indicating this, otherwise returns the value of the 
	// front of the Q
	virtual std::ItemType peek() const = 0;

	// outputs contents to a string
	virtual std::ItemType toString() const = 0;
protected:
	static const ItemType QUEUE_SIZE=4;

};


template <class ItemType>
class  ArrayBasedQueue : IQueue {
public:
	ArrayBasedQueue(void);
	virtual ~ArrayBasedQueue();
	bool isEmpty() const override;
	bool enQueue(const std::ItemType &val) override;
	bool deQueue() override;
	//If the ADT is empty throw an exception indicating this
	std::Itemtype peek() const override;
	std::ItemType toString() const override;
private:
	ItemType arrqueue_front=-1;
	ItemType arrqueue_back=-1;
	std::array<std::string,QUEUE_SIZE> arrqueue={};	

};


#include "StackQueue.cpp"








