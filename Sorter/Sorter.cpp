// Sorter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "InputGen.h"
#include "Bubble.h"

int main()
{
	InputGen generator;
	generator.setSize(10);
	generator.generate();

	Algo *test = new Bubble(generator.getInput());
	test->result();
	test->run();
	test->result();

	delete test;

	system("PAUSE");
	return 0;
}