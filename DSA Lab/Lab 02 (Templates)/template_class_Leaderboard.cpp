#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Leaderboard
{
private:
    string name[100];
	T score[100];
	int count;
public:

	Leaderboard(string n, T s)
	{
		count = 0;
		name[count] = n;
		score[count] = s;
	}
	
	void addPlayer(string n, T s)
	{ 
		if (count <=100)
		{
			name[count] = n;
			score[count] = s;
			count++;
		}
		else
		{
			cout << "Maximum Players are 100" << endl;
		}

	}
	void display()
	{
	
		for (int i = 0; i < count; i++)
		{
			cout<<"PLayer " << i << " Name: " << name[i]<<endl << "Player " << i << " Score:" << score[i] <<endl;
		}
	
	}

	void winner()
	{
		T max = score[0];
		int index=0;
		for (int i = 0; i < count; i++)
		{
			if (score[i] > max)
			{
				max = score[i];
				index = i;
			}
		}
		cout << "Winner: " << name[index] << " "<<"Score:"<<score[index] << endl;
	}

};
int main()
{
	Leaderboard<int> l1("Alice", 1500);
	l1.addPlayer("Bob", 2300);
	l1.addPlayer("Charlie", 1900);
	l1.display();
	
	cout << endl;
	

	l1.winner() ;
	

	return 0;
}