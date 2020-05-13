#include<iostream>

using namespace std;

int counter = 1;

struct node
{
    int number;
    node *next;
};

node *start = NULL, *temp = NULL;

node *create(int num)
{
    node *newnode = new node;

    newnode -> number = num;
    newnode -> next = NULL;

    return newnode;
}

void insertNode(int value)
{
    if(start == NULL)
    {
        start = temp = create(value);
    }

    else
    {
        temp -> next = create(value);
        temp = temp -> next;
    }

}

void display()
{
    int i=0;

    node *tempPtr = start;

    while(i<counter)
    {
        cout<<tempPtr -> number<<" -> ";
        tempPtr = tempPtr -> next;
        i++;
    }

    cout<<" NULL";
}

int main()
{
    node *delptr = NULL;

    int i=0;
    int num = 1;
    int index;
    char ch;

    cout<<"ENTER NUMBER : ";
    cin>>num;

    while(counter<num + 1)
    {
        insertNode(counter);
        counter++;
    }

    temp -> next = start;

    temp = start;

    while(true)
    {
        if(temp -> next -> number == temp -> number)
        {
            cout<<"REQUIRED POSITION : "<<temp -> number;
            break;
        }

        delptr = temp -> next;
        temp -> next = delptr -> next;

        delete delptr;

        temp = temp -> next;
    }

    return 0;
}

