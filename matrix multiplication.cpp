#include <stdio.h>
int main() {
	int m, n, p, q, i, j, k;
	printf("Enter the number of rows and columns of the first matrix:");
	scanf("%d %d", &m, &n);
	printf("Enter the number of rows and columns of the second matrix:");
	scanf("%d %d", &p, &q);
	if (n != p) {
		printf("Matrix multiplication is not possible.\n");
		return 1;
	}
	int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q];
	printf("Enter the elements of the first matrix:\n");
	for (i = 0; i < m; i++){
		for (j = 0; j <n; j++){
			scanf("%d", &firstMatrix[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for(i = 0; i < p; i++){
		for(j = 0; j < q; j++){
			scanf("%d", &secondMatrix[i][j]);
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < q; j++){
			resultMatrix[i][j] = 0;
			for(k = 0; k < n; k++){
				resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
	printf("Resultant matrix after multiplication:\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < q; j++){
			printf("%d", resultMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}