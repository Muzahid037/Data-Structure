#include <bits/stdc++.h>

#define SIZE 20005

using namespace std;

list<int> adj[SIZE];
int visit[SIZE];

int main()
{
	int i,n, x,y, node;

		scanf("%d", &n);

		memset(visit, 0, sizeof visit);
		//for(i = 0; i < SIZE; i++)
		//	adj[i].clear();

		for(i = 0; i < n; i++)
		{
			scanf("%d %d", &x, &y);
			adj[x].push_back(y);
			adj[y].push_back(x);
		}

		for(i = 0; i < SIZE; i++)
		{
			if(!adj[i].empty() && visit[i] == 0)
			{
				stack<int> q;
				q.push(i);
				visit[i] = 1;

				while(!q.empty())
				{
					node = q.top();
					q.pop();
					cout<<node<<" ";

					for(list<int>::iterator it = adj[node].begin(); it != adj[node].end(); it++)
					{
						if(visit[*it] == 0)
						{
							q.push(*it);
							visit[*it]=1;
						}
					}
				}

			}
		}

	return 0;
}

