#pragma once

#include "Input.h"

class Algo {
public:
	Algo();
	Algo(const Input i);

	void setInput(Input i);
	void result();

	virtual void run() = 0;
protected:
	Input input;
};

