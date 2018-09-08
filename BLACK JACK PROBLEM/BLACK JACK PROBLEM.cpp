// BLACK JACK PROBLEM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
char c1,c2,c3;
int aceCounter = 0;
cout << "Please enter three cards: ";
cin >> c1 >> c2 >> c3;
int total = 0;


if (c1 >= '2' && c1 <= '9')
total = total + c1 - 48;
else if (c1 == 'A')
{
total = total + 11;
aceCounter++;
}
else
total = total + 10;


if (c2 >= '2' && c2 <= '9')
total = total + c2 - 48;
else if (c2 == 'A')
{
total = total + 11;
aceCounter++;
}
else
total = total + 10;


if (c3 >= '2' && c3 <= '9')
total = total + c3 - 48;
else if (c3 == 'A')
{
total = total + 11;
aceCounter++;
}
else
total = total + 10;


if (total > 21 && aceCounter > 0)
{
total = total - 10;
aceCounter--;
}


cout << "The Black Jack sum is " << total << endl;
system("Pause");
return 0;
}
