#include <stdio.h>


extern int kopirajNegativne(short niz1[], short niz2[], int n);

int main() {

	int n, m;
	short mat[20][20];
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			scanf_s("%hd", &mat[i][j]);

	short niz[100];
	int x = 0;
	for (int i = 0; i < n; ++i) {
		x += kopirajNegativne((niz + x), mat[i], m);
	}
	
	for (int i = 0; i < x; ++i)
		printf("%hd ", niz[i]);

	return 0;
}
