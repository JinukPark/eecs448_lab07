#ifndef TEST_H
#define TEST_H
#include "LinkedList.h"



class Test
{
public:

	/** @pre None.
	*   @post An empty list is created.
	*/
	void ts_LinkedList();

	/** @pre None.
	*   @post Deletes all nodes in the list.
	*/
	void ts_desLinkedList();

	/** @pre None.
	*   @post None.
	*   @return true if the is empty, false otherwise.
	*/
	void ts_isEmpty();

	/** @pre None.
	*   @post None.
	*   @return the number of elements in the list.
	*/
	void ts_size();	

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true is the value is in the list, false otherwise.
	*/
	void ts_search();

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return none.
	*/
	void ts_addBack();

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return none.
	*/
	void ts_addFront();

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if the back element was removed, false if the list is empty.
	*/
	void ts_removeBack();

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if the front element was removed, false if the list is empty.
	*/
	void ts_removeFront();

	void dispResult(bool tf);

	void priVec(LinkedList<int> *list);

	void testAll();

	int correctSizeofList(LinkedList<int> *list);


private:

};

#endif