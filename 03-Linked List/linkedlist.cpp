#include <iostream>
#include "LinkedList.h"

using namespace std;

void LinkedList::insertToHead(int input)
{
  Node *newNode = new Node();
  newNode->value = input;
  newNode->next = head;
  head = newNode;
  if (tail == NULL)
  {
    tail = head;
  }
}

void LinkedList::insertToTail(int input)
{
  Node *newNode = new Node();
  newNode->value = input;
  newNode->next = NULL;

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
}

void LinkedList::insertAfter(int node, int input)
{
  Node *newNode = new Node();
  newNode->value = input;

  Node *tmp = head;
  Node *nodeTmp = NULL;
  int pos = 1;

  while (tmp != NULL)
  {
    if (pos == node)
    {
      nodeTmp = tmp;
      break;
    }

    tmp = tmp->next;
    pos++;
  }

  if (nodeTmp != NULL)
  {
    newNode->next = nodeTmp->next;
    nodeTmp->next = newNode;
  }
  else
  {
    cout << "Node Undefind" << endl;
  }
}

void LinkedList::trackNode()
{
  Node *tmp = head;
  int pos = 1;

  while (tmp != NULL)
  {
    if (pos == 3)
    {
      cout << tmp->value;
      return;
    }

    tmp = tmp->next;
    pos++;
  }
}

void LinkedList::printAll()
{
  Node *tmp = head;

  while (tmp != NULL)
  {
    cout << tmp->value << ", ";
    tmp = tmp->next;
  }

  cout << endl;
}
