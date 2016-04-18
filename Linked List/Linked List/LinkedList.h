#ifndef _LinkedList_
#define _LinkedList_

typedef unsigned int uint;

template<class T>
struct Node{
public:
	T value;

	const Node* next() const{ return nxt; }

private:
	Node* next = nullptr;

	Node(const T& data) : value(data){};

	virtual ~Node(){
	}
};

template<class T>
class LinkedList{
private:
	Node* firstnode = nullptr;
public:
	virtual ~LinkedList(){

	}
};
#endif