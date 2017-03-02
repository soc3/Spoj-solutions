#include <iostream>
#include <algorithm>
using namespace std;

/* Se recorre el arreglo buscando la menor diferencia entre el mayor y menor
 * elemento del subarreglo i hasta i+K */
int main(){
	unsigned long T, N, K, i, min;
	unsigned long hs[20000];
	cin >> T;
	while(T>0){
		cin >> N >> K;
		for(i=0;i<N;i++)
			cin >> hs[i];
		sort(hs, hs+N);
		min=1000000000;
		for(i=0;i<=N-K;i++){
			if(hs[i+K-1]-hs[i]<min)
				min=hs[i+K-1]-hs[i];
		}
		cout << min << endl;
		T--;
	}
}