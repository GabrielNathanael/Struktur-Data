#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
  LinkedList list1;

  list1.insertToHead(30);
  list1.insertToHead(20);
  list1.insertToTail(10);
  list1.insertAfter(2, 70);

  cout << endl;
  
  list1.printAll();
  
  list1.deleteFromHead();
  list1.printAll();

  list1.deleteFromTail();
  list1.printAll();

  list1.deleteByValue(70);
  list1.printAll();

}
