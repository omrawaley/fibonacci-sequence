#include <iostream>
#include <vector>

using namespace std;

vector<uint64_t> gen_fib(int n)
{
	vector<uint64_t> fib(n);

	fib[0] = 1;
  fib[1] = 1;

  for (int i = 2; i < n; ++i) 
	{
    fib[i] = fib[i - 2] + fib[i - 1];
  }

	return fib;
}

int main(int argc, char* argv[])
{
  int n;

  if(argc != 2)
  {
    std::cout << "Error: argument expected" << std::endl;

    return 1;
  }
  else 
  {
    n = strtol(argv[1], nullptr, 0);
  }

	vector<uint64_t> fib = gen_fib(n);

	for(int i = 0; i < n; i++)
	{
		std::cout << fib[i] << " ";
	}

	return 0;
}
