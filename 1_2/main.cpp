#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;
	unsigned long long num;
	std::vector<uint8_t> bit_vec(8,0);

	std::cout << "Input some unsigned 8-byte number, please" << std::endl;
	std::cin >> num;

	int k = 0;
	int j = 7;
	for (int i=sizeof(num)*8-1; i>=0; --i)
	{
			bit_vec[k] +=(((int)((num>>i)&1))<<j);
			j--;
	
		if (j<0)
		{
			j=7;
			k++;
		}
	}
	for (uint8_t c: bit_vec)
	{
		cout << hex << static_cast<int>(c) << endl;
	}
	std::system("pause");
	return 0;
}