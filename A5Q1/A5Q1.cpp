#include"sorteddoublylist.h"
int main() {
	list<int> l1, l2;
	l1.insert(2);
	l1.insert(5);
	l1.insert(3);
	l1.insert(1);
	l1.insert(4);
	l1.reset();
	while (!l1.is_last()) {
		cout << l1.get_next() << " ";
	}
	cout << endl;
	l1.update(1, 0);
	l1.reset();
	while (!l1.is_last()) {
		cout << l1.get_next() << " ";
	}
	cout << endl;
	l1.update(0, 6);
	l1.reset();
	while (!l1.is_last()) {
		cout << l1.get_next() << " ";
	}
	cout << endl;
	l1.erase(2);
	l1.reset();
	while (!l1.is_last()) {
		cout << l1.get_next() << " ";
	}
	cout << endl;
	l2 = l1;
	l2.reset();
	while (!l2.is_last()) {
		cout << l2.get_next() << " ";
	}
	cout << endl;
	list<int> l3(l2);
	l3.reset();
	while (!l3.is_last()) {
		cout << l3.get_next() << " ";
	}
	cout << endl;
	int val = 1;
	if (l1.find(val)) {
		cout << "Found " << val << endl;
	}
	else {
		cout << "Can't find " << val << endl;
	}
	val = 6;
	if (l1.find(val)) {
		cout << "Found " << val << endl;
	}
	else {
		cout << "Can't find " << val << endl;
	}
	return 0;
}