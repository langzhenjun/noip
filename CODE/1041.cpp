//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main(int argc, char** args) {
//	int n, m, t;
//	int* k;
//	int* s;
//	
//	while(cin>>n>>m) {
//		k = (int*)malloc(sizeof(int)*n);
//		s = (int*)malloc(sizeof(int)*n);
//		
//		for(int i=0; i<n; i++) {
//			cin >> k[i] >> s[i];
//		}
//		
//		cout << "*" << endl;
//		
//		for(int j=0; j<n; j++) {
//			for(int jj=j+1; jj<n; jj++) {
//				if ((s[jj] > s[j]) || ((s[jj] == s[j]) && (k[jj] < k[j]))) {
//					t = s[j];
//					s[j] = s[jj];
//					s[jj] = t;
//					t = k[j];
//					k[j] = k[jj];
//					k[jj] = t;
//				} 
//			}
//		}
//		
//		float mm = m * 1.5 < n ? m * 1.5 : n;
//		int c=0;
//		
//		while(c<=mm || s[c]==s[c-1]) {
//			c++;
//		}
//		
//		cout << s[c-1] << " " << c << endl;
//		
//		int d=0;
//		while(d<c) {
//			cout << k[d] << " " << s[d] << endl;
//			d++;
//		}
//		
//		free(k);
//		free(s);
//	}
//	
//	return 0;
//} 

#include<bits/stdc++.h>
using namespace std;
int number[5005],mark[5005];
int main(){
	int people,pass;
	cin>>people>>pass;
	for (int i=1;i<=people;++i)
		cin>>number[i]>>mark[i];
	pass=pass*1.5/1;
	for (int i=1;i<=people;++i){
		for (int j=1;j<=people;++j){
			if (mark[j]<mark[j+1]){
				swap(mark[j],mark[j+1]);
				swap(number[j],number[j+1]);
			}
		}
	}
	int passpeople=pass;
	for (int j=pass+1;j<=people;++j)
		if (mark[j]==mark[pass]) passpeople++;
	cout<<mark[pass]<<' '<<passpeople<<endl;
	for (int i=1;i<=people;++i){
		for (int j=1;j<=people-i;++j){
			if (mark[j]==mark[j+1]&&number[j]>number[j+1])
				swap(number[j],number[j+1]);
		}
	}
	for (int i=1;i<=passpeople;++i)
		cout<<number[i]<<' '<<mark[i]<<endl;;
	return 0;
}

