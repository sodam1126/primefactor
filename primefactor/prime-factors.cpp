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
			if(num == 4)
			{
				while (num % 2 == 0)
				{
					res.push_back(2);
					num /= 2;
				}
			}
			else if(num == 6)
			{
				while(num % 2 == 0)
				{
					res.push_back(2);
					num /= 2;
				}
				while(num % 3 == 0)
				{
					res.push_back(3);
					num /= 3;
				}
			}
			else
				res.push_back(num);
		}
			
		return res;
	}
};