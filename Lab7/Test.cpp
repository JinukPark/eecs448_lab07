#include "Test.h"

void Test::ts_LinkedList(){
	cout << "\n**********LinkedList()**********" << endl;
	LinkedList<int> *list = new LinkedList<int>;
	bool result;

	cout << "An empty list is created : ";
	result = (correctSizeofList(list) == 0) ? true : false;
	dispResult(result);

	cout << "Size of the list is 0 : ";
	result = (correctSizeofList(list) == 0) ? true : false;
	dispResult(result);
}



void Test::ts_isEmpty(){
	cout << "\n**********isEmpty()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;

	priVec(list);
	
	if (list->isEmpty())
	{
		cout << "List is empty" << endl;
		result = (list->toVector().size() == 0) ? true : false;
	}
	else
	{
		cout << "List is NOT empty" << endl;
		result = (list->toVector().size() != 0) ? true : false;
	}
	cout << "isEmpty() : ";
	dispResult(result);
};

void Test::ts_size(){
	cout << "\n**********size()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;
	int size = list->size();

	cout << "Size of empty list is 0 : ";
	result = (list->size() == 0) ? true : false;
	dispResult(result);
	cout << "Size is " << list->size() << endl;

	for (int i = 0; i < 3; i++)
	{
		list->addBack(i);
		cout << "addBack(" << i << ")" << endl;
	}
	priVec(list);

	cout << "Size after addBack() x 3 is 3 : ";
	result = (list->size() == 3) ? true : false;
	dispResult(result);
	cout << "Size is " << list->size() << endl;

};

void Test::ts_search(){
	cout << "\n**********search()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;

	for (int i = 1; i <= 5; i++)
	{
		cout << "addFront(" << i << ")" << endl;
		list->addFront(i);
	}
	for (int i = 6; i <= 10; i++)
	{
		cout << "addBack(" << i << ")" << endl;
		list->addBack(i);
	}

	priVec(list);

	for (int i = -5; i <= 15; i++)
	{
		cout << "search(" << i << ") : ";
		if (i < 1 || i>10){
			result = (list->search(i) == false) ? true : false;
			dispResult(result);
		}
		else
		{
			result = (list->search(i) == true) ? true : false;
			dispResult(result);
		}
	}

};


void Test::ts_addBack(){
	cout << "\n**********addBack()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;
	int preSize = list->size();

	for (int i = 0; i < 5; i++)
	{
		list->addBack(i);
		cout << "addBack(" << i << ")" << endl;
		cout << "Size increased by 1 : ";
		result = (list->size() - preSize == 1) ? true : false;
		dispResult(result);
		preSize = list->size();

		cout << "An element add is " << i << " : ";
		result = (i == list->toVector()[i]) ? true : false;
		dispResult(result);
	}
};

void Test::ts_addFront(){
	cout << "\n**********addFront()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;

	int preSize = list->size();

	for (int i = 0; i < 5; i++)
	{
		list->addFront(i);
		cout << "addFront(" << i << ")" << endl;
		cout << "Size increased by 1 : ";
		result = (list->size() - preSize == 1) ? true : false;
		dispResult(result);
		preSize = list->size();

		cout << "An element add is " << i << " : ";
		result = (i == list->toVector()[0]) ? true : false;
		dispResult(result);
	}
};

void Test::ts_removeBack(){
	cout << "\n**********removeBack()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;

	for (int i = 0; i < 3; i++)
	{
		list->addBack(i);
		cout << "addBack(" << i << ")" << endl;
	}
	priVec(list);
	cout << "Size of the list : " << correctSizeofList(list) << endl;

	int preSize = list->size();

	for (int i = 0; i < 3; i++)
	{
		list->removeBack();
		cout << "\nremoveBack()" << endl;
		priVec(list);
		cout << "Size of the list : " << correctSizeofList(list) << endl;

		cout << "Size decreased by 1 : ";
		result = (list->size() - preSize == -1) ? true : false;
		dispResult(result);
		preSize = list->size();
	}
};

void Test::ts_removeFront(){
	cout << "\n**********removeFront()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;

	for (int i = 0; i < 3; i++)
	{
		list->addFront(i);
		cout << "addFront(" << i << ")" << endl;
	}
	priVec(list);
	cout << "Size of the list : " << correctSizeofList(list) << endl;

	int preSize = list->size();

	for (int i = 0; i < 3; i++)
	{
		list->removeFront();
		cout << "\nremoveFront()" << endl;
		priVec(list);
		cout << "Size of the list : " << correctSizeofList(list) << endl;

		cout << "Size decreased by 1 : ";
		result = (list->size() - preSize == -1) ? true : false;
		dispResult(result);
		preSize = list->size();
	}
};

void Test::ts_desLinkedList(){
	cout << "\n**********~LinkedList()**********" << endl;

	LinkedList<int> *list = new LinkedList<int>;
	bool result;

	cout << "Create a list" << endl;
	for (int i = 0; i < 3; i++)
	{
		list->addBack(22);
		cout << "addBack(22)" << endl;
		list->addFront(22);
		cout << "addFront(22)" << endl;
	}

	priVec(list);

	list->~LinkedList();
	cout << "~LinkedList()" << endl;
	priVec(list);

	cout << "~LinkedList() : ";
	result = (list->toVector().size() == 0) ? true : false;
	dispResult(result);
};



void Test::dispResult(bool tf){
	if (tf)
		cout << "PASS" << endl;
	else
		cout << "FAIL" << endl;

};

void Test::priVec(LinkedList<int> *list){
	cout << "... In the list ..." << endl;
	if (list->toVector().size() == 0)
		cout << "... NOTHING ..." << endl;
	for (int i = 0; i < list->toVector().size(); i++)
	{
		cout << "[" << i << "] is " << list->toVector()[i] << endl;
	}
};

int Test::correctSizeofList(LinkedList<int> *list)
{
	return list->toVector().size();
};

void Test::testAll(){
	ts_LinkedList();
	ts_isEmpty();
	ts_addBack();
	ts_addFront();
	ts_size();
	ts_removeBack();
	ts_removeFront();
	ts_search();
	ts_desLinkedList();
};