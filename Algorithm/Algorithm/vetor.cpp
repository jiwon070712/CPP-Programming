#include <iostream>
#include <vector>
//#include <algorithm>

using namespace std;

int main()
{
	vector<double> v;
	int n, i;
	int max = 0;
	double  num = 0;
	double avg = 0;
	cin >> n;



	for (i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
		

	}
	
	//cout << *max_element(v.begin(), v.end());

	// (condition) ? true : false;

	for (i = 0; i < v.size(); i++)
	{
		if (max < v[i])
		{
			max = v[i];
		}
	}
	
	for (i = 0; i <v.size(); i++)
	{
		
		num += v[i] / max * 100;
	}
	avg = num / n;

	cout << avg;




	
}