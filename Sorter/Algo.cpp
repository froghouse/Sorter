#include "stdafx.h"
#include "Algo.h"


Algo::Algo() {};
Algo::Algo(const Input i) : input(i) {};

void Algo::setInput(Input i) { this->input = i; }
void Algo::result() { this->input.print(); }