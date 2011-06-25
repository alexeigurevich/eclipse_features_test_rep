#include <iostream>

#include "test.h"

int main()
{
	std::cout << "Hello cmake! " << foo(5) << std::endl;
	int i = 1;
	++i;
	return 0;
}
