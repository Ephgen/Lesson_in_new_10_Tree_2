#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

struct Element {
	char data;
	Element* next;
};

class List
{
	Element* head;
	Element* tail;
	int count;		// ���-�� ��������� � ������

public:
	List();
	~List();

	void Add(char);
	void Del();
	void DelAll();
	void Print();
	int GetCount();
};

