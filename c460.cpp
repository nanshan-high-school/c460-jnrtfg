#include <iostream>



int main(int argc, char** argv) 
{
	int N,ci[10000],ai[10000],ri[10000],di[10000],total=0;
	scanf("%d",&N);
	for(int i=0;i<=N-1;i++)
	{
		scanf("%d %d %d %d",&ci[i],&ai[i],&ri[i],&di[i]);
	}
	for(int j=0;j<=N-1;j++)
	{
		for(int k=j+1;k<=N-1;k++)
		{
			for(int l=k+1;l<=N-1;l++)
			{
				if(ci[j]+ci[k]+ci[l]==6&&ci[j]!=ci[k])
				{
					if(ai[j]+ai[k]+ai[l]>0)
					{
						if(ri[j]+ri[k]+ri[l]>0)
						{
							if(di[j]+di[k]+di[l]>0)
							{
								total++;
							}
						}
					}
				}
			}
		}
	}
	printf("%d",total);
	return 0;
}
