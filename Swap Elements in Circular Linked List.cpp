#include<iostream>

using namespace std;

int counter = 1;

struct node
{
    int number;
    node *next;
};

node *start = NULL, *temp = NULL, *previous = NULL;

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
        start = temp = previous = create(value);
    }

    else
    {
        temp -> next = create(value);
        previous = temp;
        temp = temp -> next;
        cout<<previous -> number<<" -"<<temp -> number<<endl;
    }

}

void display()
{
    int i=0;

    node *tempPtr = start;

    while(i<counter + 7)
    {
        cout<<tempPtr -> number<<" -> ";

        tempPtr = tempPtr -> next;

        i++;
    }
}

int main()
{
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

    display();
    cout<<endl<<endl;

     temp -> next = start -> next;
     previous -> next = start;
     start -> next = temp;

     start = temp;

    display();

    return 0;
}

