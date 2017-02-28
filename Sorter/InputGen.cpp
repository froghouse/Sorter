#include "stdafx.h"
#include "InputGen.h"


InputGen::InputGen() {
	size = 100;
	generate();
}

InputGen::InputGen(size_t s) {
	generate();
}

void InputGen::setSize(size_t s) { size = s; }

void InputGen::generate() {
	std::vector<int> tmp(size);
	std::generate(tmp.begin(), tmp.end(), std::rand);

	numbers = tmp;
}

Input InputGen::getInput() { return Input(numbers); };