#include<iostream>
#include<string>




std::string nombre() {
	std::string input;
	std::cout << "\nIntroduce tu nombre: ";
	std::cin >> input;
	return input; 
}

void main() {
	std::cout << "Hello World!";
	std::cout << "\nBienvenido " << nombre();
}