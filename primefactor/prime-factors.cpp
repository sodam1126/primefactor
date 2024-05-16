#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int num)
	{
		vector<int> res = {};
		if (num > 1)
		{
			int divisor = 2;
			if(num == 4)
			{
				while (num % divisor == 0)
				{
					res.push_back(divisor);
					num /= divisor;
				}
			}
			
			else if(num == 6)
			{
				for(divisor = 2; num > 1; divisor++)
				{
					while (num % divisor == 0)
					{
						res.push_back(divisor);
						num /= divisor;
					}
				}
			}
			else
				res.push_back(num);
		}
			
		return res;
	}
};