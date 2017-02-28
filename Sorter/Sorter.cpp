// Sorter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	InputGen generator(10);

	Algo *test = new Bubble(generator.getInput());
	test->result();
	test->run();
	test->result();

	delete test;

	system("PAUSE");
	return 0;
}