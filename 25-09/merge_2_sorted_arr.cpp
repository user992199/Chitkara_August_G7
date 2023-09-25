#include<iostream>
using namespace std;
void m2sa(int a1[], int m, int a2[], int n){
	int i = 0, j = 0, k = 0;
	int * a3 = new int[m+n];
	while(i < m and j < n){
		if(a1[i] < a2[j])
			a3[k++] = a1[i++];
		else
			a3[k++] = a2[j++];
	}
	while(i < m)
		a3[k++] = a1[i++];
	while(j < n)
		a3[k++] = a2[j++];
	for(int i = 0; i < m+n; i++)
		a1[i] = a3[i];
}
int main(){
	int a1[10] = {2, 5, 6, 8, 10};
	int a2[] = {1, 3, 5, 7};
	int m = 5;
	int n = sizeof(a2)/sizeof(a2[0]);
	m2sa(a1, m, a2, n); 
	for(int i = 0; i < m+n; i++){
		cout<<a1[i]<<" ";
	}cout<<endl;
	return 0;
}