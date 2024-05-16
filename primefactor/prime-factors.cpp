#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int num)
	{
		vector<int> res = {};

		for (int divisor = 2; num > 1; divisor++)
		{
			while (num % divisor == 0)
			{
				res.push_back(divisor);
				num /= divisor;
			}
		}


		return res;
		}
	};