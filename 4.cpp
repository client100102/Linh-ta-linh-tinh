// vẽ hình trái tim cơ bản
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	int size = 10;
	for(int x = 0;x < size; x++)
	{
		for(int y = 0; y <= 4 * size; y++)
		{
			double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
			double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
			if(dist1 < size + 0.5 || dist2 < size + 0.5)
			{
				cout << "b";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for(int x = 1; x < 2 * size; x++)
	{
		for(int y = 0; y < x; y++)
		{
			cout << " ";
		}
		for(int y = 0; y < 4 * size + 1 - 2 * x; y++)
		{
			cout << "b";
		}
		cout << endl;
	}
	return 0;
}
