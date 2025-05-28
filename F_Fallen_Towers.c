#include <stdio.h>
#include <string.h>

#define N	100000

int max(int a, int b) { return a > b ? a : b; }

int main() {
	int t;

	scanf("%d", &t);
	while (t--) {
		static int aa[N], bb[N];
		int n, k, i, lower, upper, d, good;

		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &aa[i]);
		lower = -1, upper = n;
		while (upper - lower > 1) {
			k = (lower + upper) / 2;
			memset(bb, 0, n * sizeof *bb);
			good = 1;
			for (i = 0; i < n; i++) {
				if (i > 0)
					bb[i] += bb[i - 1];
				d = bb[i] - max(i - k, 0);
				if (d < 0) {
					good = 0;
					break;
				}
				d += aa[i];
				if (i + 1 < n) {
					bb[i + 1]++;
					if (i + d + 1 < n)
						bb[i + d + 1]--;
				}
			}
			if (good)
				upper = k;
			else
				lower = k;
		}
		printf("%d\n", n - upper);
	}
	return 0;
}
