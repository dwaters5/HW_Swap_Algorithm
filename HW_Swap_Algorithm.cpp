// HW_Swap_Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>



int main() {
	char c;
	std::cout << "Enter your values: ";
	std::string str;
	getline(std::cin, str);
	int len = str.length();
	
	std::cout << "String before sort: " << str;
	
 	for (int i = 0; i < len; i++) 
	{

		
		for (int j = 0; j < len - 1; j++) 
		{
				
			if (str[j] > str[j + 1]) 
			{ 

					
					
					c = str[j];
					str[j] = str[j + 1];
					str[j + 1] = c;
					

			}
			
		}

		
	}
	
	
	std::cout << "\nString after sort but has whitespaces: " << str; 
	
	str.erase(std::remove_if(str.begin(), str.end(),
		[](char c) 
		{ 
			return (c == ' ' || c == '\n' || c == '\t' );
		}),
		str.end());

	std::cout << "\nString with removed whitespace: " << str;
	
	
	std::cout<< "\nString final product : " << str;
	return 0;
	
	
}




	







	











































// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
