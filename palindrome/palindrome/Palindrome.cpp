#include<iostream>
#include <string.h>
#include <conio.h>
using namespace std;

void main( )
{
	cout<<"**********Palindrome***********\n\n";
    char hafiz[20];
	cout<<"Enter word : ";
	cin>>hafiz;
	strrev(hafiz);
	
	
    if(strrev(hafiz)==hafiz)
	{
		cout << "\n\nPalindrome";
	}
    if(strrev(hafiz)!=hafiz)
	{
		cout << "\n\nIt Is Not a palindrome";
	}
    getch();
}