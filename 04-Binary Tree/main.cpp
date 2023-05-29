#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char**argv){
	
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(2);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	
	bin.insert(30);
	
    cout << "In Order: ";
	bin.inOrder(); 
	cout << endl;
	cout<< "Pre Order : " ;
	bin.preOrder();
	cout<<endl;
	cout<< "Post Order : " ;
	bin.postOrder();
	cout<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}