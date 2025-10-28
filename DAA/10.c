#include <stdio.h>
	for (i= 0;i<N;i++){
		for(j=0;j<N;j++){
			if(dist[i][j] == INF)
				printf("  INF");
				else if (dist[i][j]<0)
					printf("   %d",dist[i][j]);
				else if (dist[i][j]==10)
					printf("   %d",dist[i][j]);
					
			else
				printf("    %d",dist[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int N,E,i,u,v,w;
	printf("Enter the number of vertices : ");
	scanf("%d",&N);
	printf("Enter the number of edges : ");
	scanf("%d",&E);

	int graph[10][10] = {0};

	for(i=0;i<E;i++){
		printf("Enter source : ");
		scanf("%d",&u);
		printf("Enter destination : ");
		scanf("%d",&v);
		printf("Enter weight : ");
		scanf("%d",&w);

		graph[u-1][v-1] = w;
	}
	floydWarshall(graph,N);
	return 0;
}