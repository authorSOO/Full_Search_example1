#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int left=0;int right=0;int ans=0;
	int sum = a[0];
	while(left<=right && right<n){
		if(sum<m){
			sum+=a[++right];
		}
		else if(sum==m){
			ans++;
			sum+=a[++right];	
		}
		else {
			sum-=a[left++];
			if(left>right && left<n){
				right=left;
				sum=a[left];
			}
			
		}
	}
	cout<<ans<<endl; 
	return 0;
} 
