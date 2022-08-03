#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void vectorShift(vector<T>& firstVect, vector<T>& secondVect)
{
	swap(firstVect, secondVect);
}

int main()
{
	vector<vector<int>> calvin = { {10,10,10},{9,9,9},{8,8,8} };
	cout << "vector was: \n";

	for (int i = 0; i < calvin.size(); i++)
	{
		for (int j = 0; j < calvin[i].size(); j++)
		{
			cout << calvin[i][j] << " ";
		}
		cout << endl;
	}

	vectorShift(calvin[1], calvin[2]);

	cout << "\nvector is now\n";
	for (int i = 0; i < calvin.size(); i++)
	{
		for (int j = 0; j < calvin[i].size(); j++)
		{
			cout << calvin[i][j] << " ";
		}
		cout << endl;
	}
	return 0;

}


