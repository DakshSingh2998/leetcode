//https://www.hackerearth.com/problem/algorithm/count-inversion-1-a89496c9/




#include<bits/stdc++.h>
using namespace std;
#define ll long long int
    
    ll res=0;

    void pr(ll arr[], ll n){
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    void merge(ll arr[], ll i, ll mid, ll j){
        ll ans[i+j+1];
        ll l1=i;
        ll l2=mid+1;
        ll current=0;
        while(l1<=mid && l2<=j){
            if(arr[l1]<=arr[l2]){
                ans[current]=arr[l1];
                l1++;
            }
            else{
                ans[current]=arr[l2];
                res=res+mid-l1+1;
                l2++;
            }
            current++;
        }
        while(l1<=mid){
            ans[current]=arr[l1];
            l1++;
            current++;
            
        }
        while(l2<=j){
            ans[current]=arr[l2];
            l2++;
            current++;
        }
        current=0;
        for(ll k=i;k<=j;k++, current++){
            arr[k]=ans[current];
        }
        return ;
        
    }
    
    void ms(ll arr[], ll i, ll j){
        if(i>=j){
            return ;
        }
        ll mid=i + (j - i) / 2;
        ms(arr, i, mid);
        ms(arr, mid+1, j);
        merge(arr, i, mid, j);
    }
	long long int inversionCount(long long int arr[], long long int n)
    {
        ms(arr, 0, n-1);
        //pr(arr, n);
        return res;
}
int main(){
	ll n=0;
	cin>>n;
	ll arr[n];
	for(ll i =0;i<n;i++){
		ll temp= 0;
		cin>>temp;
		arr[i]=temp;
	}
	cout<<inversionCount(arr, n);
}
