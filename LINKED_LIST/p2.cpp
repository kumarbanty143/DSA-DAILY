#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void print(node *&head)
{
    if (head == NULL)
    {
        cout << "nothing present" << endl;
        return;
    }
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{

    node *newNode = new node(12);
    print(newNode);
    insertAtHead(newNode, 23);
    print(newNode);

    return 0;
}