#include "BST312.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));

	BST_312<int> myBST;

	for(int i = 0; i < 10; i++){
		int num = rand() % 100;
		cout << num << " ";
		myBST.insertItem(num);
	}

	cout << endl << myBST.countNodes() << endl;

	vector<int> v = myBST.inOrderTraversal();
	for(int i =0; i < v.size(); i++){
		cout << v[i] << " ";
	}

	cout << endl;

	v = myBST.preOrderTraversal();
	for(int i =0; i < v.size(); i++){
		cout << v[i] << " ";
	}

	cout << endl;

	v = myBST.postOrderTraversal();
	for(int i =0; i < v.size(); i++){
		cout << v[i] << " ";
	}

	cout << endl;

	for(int i = 0; i < 15; i++){
		int n = rand() % 100;
		cout << "Is " << n << " in the tree? " << myBST.isItemInTree(n) << endl;
	}
}