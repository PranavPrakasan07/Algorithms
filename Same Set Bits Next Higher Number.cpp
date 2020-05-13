#include<iostream>
#include<math.h>

using namespace std;

int findBinary(int num)
{
    int countDigits = 0;
    int number = num;
    int sum = 0;

    while(number>0)
    {
        sum  = sum * 10 + number%2;
        number /= 2;
        countDigits++;
    }

    number = sum;
    sum = 0;

    while(countDigits--)
    {
        sum  = sum * 10 + number%10;
        number /= 10;
    }

    return sum;
}

int main()
{
    int i=0;
    int number;
    int binary;

    cout<<"ENTER NUMBER : ";
    cin>>number;

    binary = findBinary(number);

    cout<<binary;

    while()
    {
        if((binary/pow(10,i)%10) == 1)
        {
            while()
            {

            }
        }
        i++;
    }

    cout<<endl<<binary;

    return 0;
}
