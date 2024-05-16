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
			else
				res.push_back(num);
		}
			
		return res;
	}
};