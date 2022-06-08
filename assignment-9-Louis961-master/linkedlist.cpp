#include "linkedlist.h"

Linkedlist::~Linkedlist()
{
  // TODO: Destructor needs to deallocate all heap memory (delete the nodes)
  Node *currentNode = head;
  while (currentNode != NULL)
  {
    Node *nextNode = currentNode->next;
    delete currentNode;
    currentNode = nextNode;
  }
}

void Linkedlist::add_front(int num)
{
  // TODO: Add the num to a new node and insert it at the front of the list

  Node *addNode = new Node();
  addNode->data = num;
  addNode->next = head;
  head = addNode;
}

int Linkedlist::find_smallest()
{
  // TODO: Return the smallest number in the list. If the list is empty, return -1.
  int smallestNum;
  if (head == NULL)
  {
    return -1;
  }
  else
  {
    Node *temp = head;
    while (temp != NULL)
    {
      if (smallestNum > temp->data)
      {
        smallestNum = temp->data;
      }
      temp = temp->next;
    }
    return smallestNum;
  }
  // dummy value
}

void Linkedlist::print_list()
{
  // TODO: Print each value in the list to the console as shown below:
  // Ex:
  //     The list contains the values: 1 2 5 7 33 57
  std::cout << "The list contains the values: ";
  Node *temp = head;

  while (temp != NULL)
  {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
}

void Linkedlist::remove_last()
{
  // TODO: Remove the last node in the list

  if (head == NULL)
  {
    return;
  }

  if (head->next == NULL)
  {
    Node *temp = head;
    delete temp;
    head = NULL;
  }

  else
  {
    while (head->next->next != NULL)
    {
      head = head->next;
    }
    Node *temp = head->next;
    delete temp;
  }
}

bool Linkedlist::find_value(int num)
{
  // TODO: Search and return true if num is in the linked list, else return false
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == num)
    {
      return true;
    }
    temp = temp->next;
  }
  return false;
}

void Linkedlist::remove_front()
{
  // TODO: Remove the first node at the front of the list
  if (head != NULL)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
}

int Linkedlist::get_size()
{
  // TODO: Return a count of the total number of nodes in the list. Use a loop to count it
  // inside this function, do not store a value in the class.
  int i = 0;
  Node *temp = head;

  while (temp != NULL)
  {
    temp = temp->next;
    i++;
  }
  return i; // dummy value
}