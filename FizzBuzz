#include <iostream>
/* 
Write a function that will do the following:
*if the number is divisible by 3 it prints "Fizz"
*if the number is divisible by 5 it prints "Buzz"
*If the number is divisible by 3 and 5 it prints "FizzBuzz"
*If it is neither it prints the number.

*Also make a loop which takes in numbers 1 to 100 and runs through your function.
*/

void FizzBuzz(int myNum)
{
	if (myNum % 3 == 0 && myNum % 5 == 0)
	{
		std::cout << "FizzBuzz\n";
	}
	else if (myNum % 3 == 0)
	{
		std::cout << "Fizz\n";
	}
	else if (myNum % 5 == 0)
	{
		std::cout << "Buzz\n";
	}
	else
	{
		std::cout << myNum << std::endl;
	}
}
int main()
{
	for (int i = 1; i < 101; i++)
	{
		FizzBuzz(i);
	}
}
