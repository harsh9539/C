#include <iostream>
using namespace std;
int main()
{
	int i ,n, sum;
	cin >> n;
	sum = 0;
	i = 1;
	// while (i<=n)
	// {
	// 	sum = sum +i;
	// 	i = i+1;
	// }
	for (int i = 0; i < n; i++)
	{
		sum = sum +i;
		// i = i+1;
		cout<<sum;
	}
	cout<<sum;
	
	
	
	return 0;
}
