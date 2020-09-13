#include <iostream>

int main()
{
	int a;
	int b = 1;
	int c = 0;
	std::cin >> a;
	while (b <= a)
	{
		std::cout << b << " " << "\t";
		b += 2;
		++c;
		if (c % 10 == 0)
		{
			std::cout << std::endl;
		}
	}
	return 0;
}
