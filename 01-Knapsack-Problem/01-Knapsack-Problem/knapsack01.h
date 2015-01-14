#include <vector>

using namespace std;

class knapsack01 {
public:
	float lb;
	vector<bool> coe;

	knapsack01(vector<float> _objCoe, vector<float> _consCoe, float _consConst)
	{
		objCoe = _objCoe;
		consCoe = _consCoe;
		consConst = _consConst;
		lb = 0;
		exec(_objCoe, _consCoe, _consConst, 0);
	}

private:
	vector<float> objCoe;
	vector<float> consCoe;
	float consConst;
	vector<bool> _coe;
	void exec(vector<float> _objCoe, vector<float> _consCoe, float _consConst, float ub);
};