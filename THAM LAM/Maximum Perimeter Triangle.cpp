#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c){
    return a+b>c&&a+c>b&&b+c>a;
}
int main(){
    int n;cin >> n;
    long long a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n);
    int x=-1,y=-1,z=-1;
    long long tmp,ans=0,maxx=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(check(a[i],a[j],a[k])){
                    tmp=a[i]+a[j]+a[k];
                    if(tmp>ans){
                        ans=tmp;
                        x=a[i];y=a[j];z=a[k];
                    }
                    else if(tmp==ans){
                        if(a[k]>z){
                            x=a[i];y=a[j];z=a[k];
                        }
                        else if(a[k]==z&&y<a[j]){
                            x=a[i];y=a[j];z=a[k];
                        }
                    }
                }
            }
        }
    }
    if(x==-1){
        cout <<"-1";
    }
    else{
        cout << x <<" "<< y << " "<< z;
    }
}
