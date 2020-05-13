#include<iostream>
#include<vector>

using namespace std;

const int n=3;
int magicSquare[n][n];

void display()
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<magicSquare[i][j]<<"\t";
        }
        cout<<endl;
    }

}

int main()
{
    int counter = 1;
    int row = n/2;
    int col = n-1;

    magicSquare[row][col] = counter;

    while(true)
    {
        row -= 1;
        col += 1;

        if(row == -1 && col == n)
        {
            row = 0;
            col = n-2;
        }

        else if(row == -1)
        {
            row = n-1;
        }

        else if(col == n)
        {
            col = 0;
        }

        else if(magicSquare[row][col] != 0)
        {
            col -=2;
            row += 1;
        }

        counter++;

        if(counter>n*n)
        {
            break;
        }

        magicSquare[row][col] = counter;

    }

    display();
    cout<<endl;

    return 0;
}


