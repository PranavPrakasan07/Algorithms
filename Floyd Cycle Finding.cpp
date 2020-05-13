#include<iostream>
using namespace std;
int counter = 0;

struct node
{
    int number;
    node *next;
};

node *start = NULL, *temp = NULL;

void display()
{
    int i=0;

    node *tempPtr = start;

    while(i<counter + 1)
    {
        cout<<tempPtr -> number<<" -> ";
        tempPtr = tempPtr -> next;
        i++;
    }

}

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

int main()
{
    node *ptr = NULL;

    int num;
    int loop_found = 0;
    int i = 0;
    int loop_begin_index = 2;
    char ch;

    do
    {

        cout<<"ENTER NUMBER : ";
        cin>>num;

        insertNode(num);
        counter++;

        cout<<"DO YOU WANT TO CONTINUE ?";
        cin>>ch;

    }while(ch == 'y' || ch == 'Y');

    ptr = start;

    while(i < loop_begin_index-1)
    {
        ptr= ptr -> next;
        i++;
    }

    temp -> next = ptr;     /* For loop example    */
    //temp -> next = NULL;  /* For no-loop example */

    node *hare = start;
    node *tortoise = start;

    while(hare != NULL && hare -> next != NULL)
    {
        hare = hare -> next -> next;
        tortoise = tortoise -> next;
        if(tortoise == hare)
        {
            loop_found = 1;
            break;
        }
    }

    tortoise = tortoise -> next;
    counter = 1;

    while(tortoise != hare)
    {
        tortoise = tortoise -> next;
        counter++;
    }

    if(loop_found == 0)
    {
        cout<<"NO LOOP ";
    }

    else
    {
        cout<<"LENGTH OF LOOP : "<<counter;
    }

    return 0;
}
