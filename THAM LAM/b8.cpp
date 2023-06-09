#include<bits/stdc++.h>
using namespace std;
struct job{
    int id,dead,profit;
    void nhap(){
        cin >> id >> dead>> profit;
    }
    void xuat(){
        cout <<id<<dead<<profit;
    }
};
bool cmp(job a, job b){
    return a.dead >b.dead ;
}
int main(){
    int n; cin >> n;
    job a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        a[i].nhap() ;
    }
    sort(a,a+n,cmp);
    int deadline=a[0].dead ;
    priority_queue<int> pq;
    int index=0;
    while(deadline>=1){
        while(index<n&&a[index].dead>=deadline){
            pq.push(a[index].profit );
            index++;
        }
        if(!pq.empty()){
            sum+=pq.top(); pq.pop();
        }
        deadline--;
    }
    cout << sum;
}
