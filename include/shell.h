#ifndef SHELL_H
#define SHELL_H
#include "system.h"
#include "string.h"
#include "kb.h"
#include "terminal.h"
#include "types.h"

void launch_shell(int n);
{
	string ch = (string)
	int counter =0;
	do
	{
		if(strEql(ch,"cmd"))
		{
			print("\nYou are in the command center.");
				launch_shell(n+1);		
		}
		
		else(strEql(ch,"clear"))
		{
			clearTerminal();		
		}
		
		else if(strEql(ch,"exit"))
		{
			print("\nBYE! BYE!.");		
		}
		
		else if(strEql(ch,"sum"))
		{
			sum();		
		}
		
		else if(strEql(ch,"multiply"))
		{
			multiply();		
		}
		
		 
	}while (!strEql(ch,"exit"));
}

void sum()
{
	print("\nHow many numbers: ");
	int n = str_to_int(readStr());
	int i =0;
	print("\n");
	int arr[n];
	fill_array(arr,n);
	int s = sum_array(arr,n);
	print("Result: ");
	print(int_to_string(s));
	print("\n");
}

void fill_array(int arr[],int n)
 {
	int i = 0;
	for (i = 0;i<n;i++)
	{
		print("ARR[");
		print(int_to_string(i));
		print("]: ");
		arr[i] = str_to_int(readStr());
		print("\n");
	}
 }
void print_array(int arr[],int n)
 { 
	int i = 0;
	for (i = 0;i<n;i++)
	{

		print(int_to_string(arr[i]));
		print(" ");
	}
	print("\n");
}


#endif
