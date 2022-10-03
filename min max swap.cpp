#include <iostream>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
	int n, i, max=0, min=0, sum;
	long long int a[10000], b[10000];
	cin>>n;
	for(i=0; i<n; i++){
		cin>>a[i];
	}

	for(i=0; i<n; i++){
		cin>>b[i];
	}

	for(i=0; i<n; i++){
		if(b[i]>a[i]){
			swap(a[i],b[i]);
		}
	}


	for(i=0; i<n; i++){
			if(a[i]>max){
			max = a[i];
		}
		//cout<<b[i]<<" "<<endl;
		if(b[i]>min){
			min = b[i];
		}
	}
sum = max*min;
cout<<sum<<endl;
}

}
