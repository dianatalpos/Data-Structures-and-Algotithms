#pragma once



typedef int TElem;

typedef TElem TComp;



typedef bool(*Relation)(TComp, TComp);

class SortedSetIterator;

class SortedSet {
	friend class SortedSetIterator;
private:
	struct Node
	{
		TComp info;
		int left;
		int right;
		int parent;
	};

	int root;
	int firstEmpty;
	int sizee;
	int capacity;
	Node* elems;
	Relation r;

	/*Representation of the SortedSet*/

public:

	//constructor

	SortedSet(Relation r);



	//adds an element to the sorted set

	//if the element was added, the operation returns true, otherwise (if the element was already in the set) 

	//it returns false

	bool add(TComp e);





	//removes an element from the sorted set

	//if the element was removed, it returns true, otherwise false

	bool remove(TComp e);



	//checks if an element is in the sorted set

	bool search(TElem elem) const;





	//returns the number of elements from the sorted set

	int size() const;



	//checks if the sorted set is empty

	bool isEmpty() const;



	//returns an iterator for the sorted set

	SortedSetIterator iterator() const;



	// destructor

	~SortedSet();



private:
	void resize();

};
