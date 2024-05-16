#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int num)
	{
		vector<int> res = {};
		if (num > 1)
			res.push_back(num);
		return res;
	}
};