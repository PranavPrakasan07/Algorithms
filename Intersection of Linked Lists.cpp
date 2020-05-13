#include<iostream>

using namespace std;

struct node
{
    int number;
    node *next;
};

node *start1 = NULL, *temp = NULL, *start2 = NULL;

node *create(int num)
{
    node *newnode = new node;

    newnode -> number = num;
    newnode -> next = NULL;

    return newnode;
}

void insertNode(int value)
{
    temp -> next = create(value);
    temp = temp -> next;
}

void display(node *start)
{
    node *tempPtr = start;

    while(tempPtr != NULL)
    {
        cout<<tempPtr -> number<<" -> ";
        tempPtr = tempPtr -> next;
    }

    cout<<"NULL "<<endl;

}

int main()
{
    int num;
    char ch;


    start1 = temp = create(0);

    do
    {
        cout<<"ENTER NUMBER : ";
        cin>>num;

        insertNode(num);

        cout<<"DO YOU WANT TO CONTINUE ?";
        cin>>ch;

    }while(ch == 'y' || ch == 'Y');

    start1 = start1->next;

    display(start1);

    temp = NULL;
    start2 = temp = create(0);

    do
    {
        cout<<"ENTER NUMBER : ";
        cin>>num;

        insertNode(num);

        cout<<"DO YOU WANT TO CONTINUE ?";
        cin>>ch;

    }while(ch == 'y' || ch == 'Y');

    start2 = start2->next;

    display(start2);

    node *temp1 = start1;
    node *temp2 = start2;

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1 -> number == temp2 -> number)
        {
            cout<<temp2 -> number<<" -> ";
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }

        else if(temp1 -> number < temp2 -> number)
        {
            temp1 = temp1 -> next;
        }

        else
        {
            temp2 = temp2 -> next;
        }

    }

    return 0;
}


