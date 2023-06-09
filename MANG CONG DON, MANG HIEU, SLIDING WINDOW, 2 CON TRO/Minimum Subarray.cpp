#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k; cin >> n >>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long tong =0;
    int ans=1e7;
    int l=0;
    int index;
    for(int i=0;i<n;i++){
        tong+=a[i];
        while(tong>=k){
            tong-=a[l];
            if(ans>i-l+1){
                index=l;
                ans=i-l+1;
            }
            l++;
        }
    }
    if(ans==1e7) cout <<"-1";
    else{
        for(int i=index;i<index+ans;i++){
        	cout << a[i] <<" ";
    	}
    }
}
