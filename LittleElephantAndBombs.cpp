#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int T;
	scanf ("%d",&T);
	while (T--)
	{
		int N;
		string s;
		scanf ("%d",&N);
		cin >> s;
		int input[N];
		for (int i = 0; i < N; i++)
		{
			input[i] = s[i] - '0';
		}
		for (int i = 0; i < N; i++)
		{
			if (input[i] == 1)
			{
				if (i == 0)
				{
					if (input[i + 1] == 0)
						input[i + 1] = -1;
				}
				else if (i == N-1)
				{
					if (input[i - 1] == 0)
						input[i - 1] = -1;
				}
				else 
				{	
					if(input[i - 1] == 0 )
						input[i - 1] = -1;
					if (input[i + 1] == 0)
						input[i+1] = -1;
				}
			}
		}
		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			if (input[i] == 0)
				cnt++;
		}
		printf ("%d\n",cnt);
	}
	return 0;
}