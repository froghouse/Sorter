#pragma once

#include "Input.h"

class InputGen {
public:
	InputGen();
	InputGen(size_t s);

	void setSize(size_t s);
	void generate();

	Input getInput();

private:
	size_t size;
	std::vector<int> numbers;
};
