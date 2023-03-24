#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

struct Element {
	int data;
	Element* next, * prev;
};

class List2
{
	Element* head, * tail;
	int count;

public:
	List2();
	List2(const List2&);
	~List2();

	int GetCount();
	Element* Getelem(int);

	void DelAll();
	void Del(int);

	void Insert(int);
	void AddTail(int);
	void AddHead(int);

	void Print();
	void Print(int);

	List2& operator = (const List2&);
	List2 operator+(const List2&);

	bool operator== (const List2&);
	bool operator!= (const List2&);
	bool operator<= (const List2&);
	bool operator>= (const List2&);
	bool operator< (const List2&);
	bool operator> (const List2&);

	List2 operator-();
};

