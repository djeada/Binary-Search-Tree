#include <iostream>
#include <cstdlib>

#include "BST.h"

using namespace std;

int main() {
	int TreeKeys[10] = { 13, 34, 2, 11, 7, 30, 64, 9, 23, 13 };
	BST myTree;

	cout << "Printing the tree in order\nBefore adding numbers\n";

	myTree.PrintInorder();

	for (int i = 0; i < 10; i++) {
		myTree.AddLeaf(TreeKeys[i]);
	}

	cout << "\nPrinting the tree in order\nAfter adding numbers\n";

	myTree.PrintInorder();

	cout << endl;

	//myTree.PrintChildren(myTree.ReturnRootKey());

	for (int i = 0; i < 10; i++) {
		myTree.PrintChildren(TreeKeys[i]);
	}

	cout << "\The smallest one is: " << myTree.FindSmallest() << endl;

	system("pause");
	
	return 0;
}