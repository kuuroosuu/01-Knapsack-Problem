#include "knapsack01.h"

float upperBound(vector<float> _objCoe, vector<float> _consCoe, float _consConst)
{
	int maxCP = 0;
	for(int i = 1;i < _objCoe.size();i++)
		if(_objCoe[i]/_consCoe[i] > _objCoe[maxCP]/_consCoe[maxCP])
			maxCP = i;
	return _objCoe[maxCP]*_consConst/_consCoe[maxCP];
}

void knapsack01::exec(vector<float> _objCoe, vector<float> _consCoe, float _consConst, float ub) {

	// infeasable
	if(_consConst<0)
		return;

	// leaf
	if(!_objCoe.size())
	{
		float curr_lb = 0;
		for(int i = 0;i < _coe.size();i++)
			curr_lb += _coe[i]*objCoe[i];
		if(curr_lb > lb)
		{
			lb = curr_lb;
			coe = _coe;
		}
		return;
	}

	// prune
	if(ub+upperBound(_objCoe,_consCoe,_consConst)<lb)
		return;

	// other
	float objCoe0 = _objCoe[0];
	_objCoe.erase(_objCoe.begin());
	float consCoe0 = _consCoe[0];
	_consCoe.erase(_consCoe.begin());

	_coe.push_back(0);
	exec(_objCoe, _consCoe, _consConst, ub);
	_coe.pop_back();
	_coe.push_back(1);
	exec(_objCoe, _consCoe, _consConst-consCoe0, ub+objCoe0);
	_coe.pop_back();
}