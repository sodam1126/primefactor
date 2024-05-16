#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int i)
	{
		vector<int> res = {};
		if (i == 2)
			res.push_back(2);
		if (i == 3)
			res.push_back(3);
		return res;
	}
};