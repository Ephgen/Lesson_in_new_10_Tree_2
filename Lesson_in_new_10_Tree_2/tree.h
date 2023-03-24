#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

struct Node {
	int x;
	Node* left, * right;
};

class Tree
{
	Node* tree;
public:
	Tree();
	void addTree(int, Node*&);
	void show(Node*&);
	void del(Node*&);
};

