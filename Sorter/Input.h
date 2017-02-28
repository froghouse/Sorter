#pragma once

#include <vector>
#include <iostream>

class Input {
public:
	Input() {};
	Input(const Input &i);
	Input(const std::vector<int> i);

	int at(int i);
	void push_back(int i);
	size_t size();
	std::vector<int> get();

	void swap(int i, int j);
	void print();

	int operator[] (int i);
private:
	std::vector<int> numbers;
};
