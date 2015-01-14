#include "knapsack01.h"
#include <iostream>

using namespace std;

int main ()
{
	vector<float> objCoe;
	/*objCoe.push_back(10);
	objCoe.push_back(10);
	objCoe.push_back(12);
	objCoe.push_back(18);*/
	objCoe.push_back(7);
	objCoe.push_back(10);
	objCoe.push_back(12);
	objCoe.push_back(18);
	objCoe.push_back(12);
	objCoe.push_back(18);

	vector<float> consCoe;
	/*consCoe.push_back(2);
	consCoe.push_back(4);
	consCoe.push_back(6);
	consCoe.push_back(9);*/
	consCoe.push_back(2);
	consCoe.push_back(4);
	consCoe.push_back(6);
	consCoe.push_back(9);
	consCoe.push_back(4);
	consCoe.push_back(7);

	//knapsack01* mknapsack01 = new knapsack01 (objCoe, consCoe, 15);
	knapsack01* mknapsack01 = new knapsack01 (objCoe, consCoe, 18);
	cout << mknapsack01->lb << endl;
	for(int i = 0;i < mknapsack01->coe.size();i++)
		cout << mknapsack01->coe[i] << " ";
	cout << endl;
	system("pause");

	return 0;
}