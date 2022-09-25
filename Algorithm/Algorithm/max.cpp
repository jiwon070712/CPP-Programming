#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{	
	int i;
	int max = 0;
	int m = 0;


	vector<int> v;

	for (i = 0; i < 9; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	for (i = 0; i < v.size(); i++)
	{
		if (max < v[i])
		{
			max = v[i];
			m = i;
		}
	}
	//max = *max_element(v.begin(), v.end());
	cout << max << "\n" << m + 1;
}	