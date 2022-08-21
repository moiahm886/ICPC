#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int case_no = 1;
	while (cin >> n)
	{
		int max = INT_MIN,min=INT_MAX;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x > max)max = x;
			if (x < min)min = x;
		}
		cout << "Case " << case_no << ": " << min << " " << max << " " << max - min << "\n";
		case_no++;
	}
	return 0;
}