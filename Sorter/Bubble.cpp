#include "stdafx.h"
#include "Bubble.h"

Bubble::Bubble(const Input i) {
	input = i;
}

void Bubble::run()
{
	size_t size = input.size();
	bool has_swaped = false; // Init

	do {
		has_swaped = false; // Loop reset (not redundant)

		for (size_t i = 1; i < size; i++)
		{
			if (input[i - 1] > input[i])
			{
				input.swap(i - 1, i);
				has_swaped = true;
			}
		}
	} while (has_swaped);
}