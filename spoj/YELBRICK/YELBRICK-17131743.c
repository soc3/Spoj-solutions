
#include <cstdio>

using namespace std;

int main()
{
	while (1) {
		int n, mini = 1005, i, j;
		scanf("%d", &n);
		int arr[n][3];
		
		if (n == 0) {
			break;
		}
		for (i = 0;i < n;i++) {
			for (j = 0;j < 3;j++) {
				scanf("%d", &arr[i][j]);
				if (mini > arr[i][j]) {
					mini = arr[i][j];
				}
			}
		}
		long long int sum = 0;
		
		for (i = 0;i < n;i++) {
			sum += (arr[i][0] * arr[i][1] * arr[i][2]) / (mini * mini * mini);
		}
		printf("%lld\n", sum);
	}
	return 0;
}