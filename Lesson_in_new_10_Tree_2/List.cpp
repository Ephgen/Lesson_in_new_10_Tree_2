#include "List.h"

List::List() {
	head = nullptr;
	tail = nullptr;
	count = 0;
}
List::~List() {
	DelAll();
}
int List::GetCount () {
	return count;
}
void List::Add(char data) {
	Element* temp = new Element;
	temp->data = data;
	temp->next = nullptr;

	if (head != nullptr) {
		tail->next = temp;
		tail = temp;
	}
	else
		head = tail = temp;
}
void List::Del() {
	Element* temp = head;
	head = head->next;
	delete temp;
}
void List::DelAll() {
	while (head != nullptr) {
		Del();
	}
}
void List::Print() {
	Element* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}