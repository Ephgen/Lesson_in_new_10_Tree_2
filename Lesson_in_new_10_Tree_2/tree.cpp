#include "tree.h"

Tree::Tree() {
	tree = nullptr;
}


void Tree::show(Node*& tree) {
	if (tree != nullptr) {
		show(tree->left);
		cout << tree->x << " ";
		show(tree->right);
	}
}

void Tree::addTree(int x, Node*& tree) {
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

void Tree::del(Node*& tree) {
	if (tree != nullptr) {
		del(tree->left);
		del(tree->right);
		delete tree;
	}
}
