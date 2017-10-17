// Determines whether an input string is a palindrome or not
// The function I created to solve the problem has a time complexity of O(n/2) 
// I've commented more verbosely here than I would normally to highlight my thought process

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string InputString)
{ 
	int StringLength = InputString.size(); 
	
	// Exit the function with false if the string is empty/0
	if(StringLength == 0) 
		return false;
	
	// Determine whether the array is even or odd.
	int ModValue = StringLength % 2; 
	
	// If the string has an even number of characters, split the array in half 
	// If a comparison returns that two elements aren't the same, return false from the function. 
	// If all comparisons are the same, return true from the function
	if ( ModValue == 0)
	{
		for (int i = 0; i < StringLength/2; i++) 
		{
			if( InputString[i] != InputString[(StringLength-1)-i] )
				return false;
		}
		
		return true;
	}
	
	// If the string has an odd number of characters, find the middle of the array and compare the elements on either side
	if (ModValue == 1)
	{
		int MidPointOfString = (StringLength-1)/2; 
		
		for (int i = 0; i < MidPointOfString; i++)
		{
			if( InputString[i] != InputString[(StringLength-1)-i] )
				return false;
		}
		
		return true;
	}
}