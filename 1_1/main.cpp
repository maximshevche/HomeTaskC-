#include <iostream>
#include <chrono>
#include <vector>

int main()
{
	int i;
	std::vector<int> prime_num;
	i=0;
	while (i < 2)
	{
		std::cout << "Input some number, please" << std::endl;
		std::cin >> i;
	
		if (i < 2)
		{
			std::cout << "ERROR! i should be at least 2" << std::endl;
			system("pause");
			std::cout << std::endl;
		}
	}
	if (2 == i)
	{
		std::cout << 2 << std::endl;
	}
	else
	{
		//Naive algorithm which checks remainder of devision of every integer smaller "i" for every integer
		
		std::cout << "Now you are about to see naive algorithm in action and time of its work" <<std::endl;
		system("pause");
		auto start_time = std::chrono::high_resolution_clock::now();
		std::cout << 2 << " ";
		prime_num.emplace_back(2);
		for (int j=3; j <= i; ++j)
		{
			for(int m=2; m<j; ++m)
			{
				if (0 == j%m)
				{
					break;
				}
				if (m == j-1)
				{
					std::cout << j << " ";
				}
			}
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "It was naive algorithm" <<std::endl;
		auto end_time = std::chrono::high_resolution_clock::now();
		std::cout << "Time elapsed: " << std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count() << " milliseconds"  << std::endl;
		system("pause");
		
		// Algorithm which stores all prime numbers in a vector and checks remainder of devision of every integer smaller "i" not for every integer but only for prime numbers from vector
		
		std::cout << std::endl;
		std::cout << "Now you are about to see algorithm which stores all prime numbers in a vector and time of its work" <<std::endl;
		system("pause");
		auto start_time_1 = std::chrono::high_resolution_clock::now();
		for (int j=3; j <= i; ++j)
		{
			for(int m=0; m<prime_num.size(); ++m)
			{
				if (0 == j%prime_num[m])
				{
					break;
				}
				if (m == prime_num.size()-1)
				{
					prime_num.emplace_back(j);
				}
			}
		}
		for (int c: prime_num)
		{
			std::cout << c << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "It was \"prime numbers in a vector\" algorithm" <<std::endl;
		auto end_time_1 = std::chrono::high_resolution_clock::now();
		std::cout << "Time elapsed: " << std::chrono::duration_cast<std::chrono::milliseconds>(end_time_1 - start_time_1).count() << " milliseconds"  << std::endl;
		system("pause");
		
		// Algorithm which uses Sieve of Eratosthenes
		
		std::cout << std::endl;
		std::cout << "Now you are about to see algorithm which uses Sieve of Eratosthenes" <<std::endl;
		system("pause");
		auto start_time_2 = std::chrono::high_resolution_clock::now();
		bool Erat [1000000] = {0};
		for(int j=2; j <= i; ++j)
		{
			if(false == Erat[j])
			{
				int m = j;
				while (m < i-j )
				{
					m+=j;
					if (Erat[m] != true)
					{
						Erat[m] = true;						
					}
				}
			}
		}
		for (int j=2; j <= i; ++j)
		{
			if (false == Erat[j])
			{
				std::cout << j << " ";
			}
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "It was \"Sieve of Eratosthenes\" algorithm" <<std::endl;
		auto end_time_2 = std::chrono::high_resolution_clock::now();
		std::cout << "Time elapsed: " << std::chrono::duration_cast<std::chrono::milliseconds>(end_time_2 - start_time_2).count() << " milliseconds"  << std::endl;
	}
	system("pause");
	return 0;
}