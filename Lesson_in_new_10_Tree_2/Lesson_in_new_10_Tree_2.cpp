#include <iostream>
#include <windows.h>
#include "tree.h"
#include "List.h"

using namespace std;


void show(Node*& tree) {
	if (tree != nullptr) {
		show(tree->left);
		cout << tree->x << " ";
		show(tree->right);
	}
}

void addTree(int x, Node*& tree) {
	if (tree == nullptr) {
		tree = new Node;
		tree->x = x;
		tree->left = tree->right = nullptr;
	}
	if (x < tree->x) {
		if (tree->left != nullptr) addTree(x, tree->left);
		else {
			tree->left = new Node;
			tree->left->left = tree->left->right = nullptr;
			tree->left->x = x;
		}
	}

	/*if (x > tree->x)*/ else
	{
		if (tree->right != nullptr) addTree(x, tree->right);
		else {
			tree->right = new Node;
			tree->right->left = tree->right->right = nullptr;
			tree->right->x = x;
		}
	}
}

void del(Node*& tree) {
	if (tree != nullptr) {
		del(tree->left);
		del(tree->right);
		delete tree;
	}
}

int main()
{
	/*Node* tree = nullptr;*/
	//Tree tree;
	//Node* n = nullptr;;
	//int x;
	//for (int i = 0; i < 5; i++) {
	//	x = rand() % 7;
	//	tree.addTree(x, n);
	//	cout << x << endl;
	//}
	//cout << endl;
	//tree.show(n);
	//tree.del(n);

	List list;			// список
	char s[] = "Hello world!!!";
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		list.Add(s[i]);
	}
	list.Print();
	list.Del();
	list.Del();
	list.Del();
	list.Print();
}
