
#include <iostream>

void FindOddNumbers(int Limit, bool IsOdd)
{
	for (int i = IsOdd ? 1 : 0; i < Limit; i += 2)
	{
		std::cout << i + 1 << std::endl;
	}

}

int main()
{
	const int Limit = 9;
	FindOddNumbers(Limit, true);
	return 0;
}