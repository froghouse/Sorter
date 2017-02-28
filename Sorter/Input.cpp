#include "stdafx.h"
#include "Input.h"


Input::Input(const Input &i) { this->numbers = i.numbers; } // Copy constructor
Input::Input(const std::vector<int> i) : numbers(i) {};

int Input::at(int i) { return numbers.at(i); }
void Input::push_back(int i) { numbers.push_back(i); }
size_t Input::size() { return numbers.size(); }
std::vector<int> Input::get() { return numbers; }

void Input::swap(int i, int j) {
	int first = numbers[i];
	int second = numbers[j];

	numbers[i] = second;
	numbers[j] = first;
}

void Input::print()
{
	for (auto i : numbers)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
}

int Input::operator[] (int i) { return numbers[i]; }