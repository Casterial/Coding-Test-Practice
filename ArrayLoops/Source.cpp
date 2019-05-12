#include <iostream>

int main()
{
	///sizeof(arr)/sizeof(*arr)
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	std::cout << "ARRAY SIZE\n";
	std::cout << sizeof(arr) / sizeof(*arr);
	std::cout << "\n";
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++)
	{
		std::cout << "I AM I";
		std::cout << i;
		std::cout << "\n";
		for (int j = 0; j < sizeof(arr) / sizeof(*arr); j++)
		{
			std::cout << "I AM J";
			std::cout << j;
			std::cout << "\n";
		}

	}

	system("PAUSE");
}