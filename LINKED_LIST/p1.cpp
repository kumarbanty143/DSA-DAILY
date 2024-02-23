#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

class node
{
    string name;
    int roll_no;

public:
    void setname(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setRollNo(int roll)
    {
        this->roll_no = roll;
    }
    int getRollNo()
    {
        return this->roll_no;
    }
    int data;
    node *ptr;
    node(int data)
    {
        this->data = data;
        this->ptr = NULL;
    }
};

int main()
{

    node *newNode = new node(23);
    cout << newNode->data << endl;
    cout << newNode->ptr << endl;
    newNode->setname("bnaty");
    cout << newNode->getName() << endl;
    newNode->setRollNo(12345);
    cout << newNode->getRollNo() << endl;

    node node1(3);
    cout << node1.data << endl;

    return 0;
}