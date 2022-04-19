#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, key; cin>>n; int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        cin>>key;
        
        //Binary Search
        int l=0, r=n-1, mid, cmp=0, found=false;
        while(l<=r){
            cmp++;
            mid = (r+l)/2;
            if(arr[mid]==key){
                found = true; break;
            }
            else if(key<arr[mid]){
                r = mid-1;
            }
            else if(key>arr[mid]){
                l = mid+1;
            }
        }
        if(found)   cout<<"Present ";
        else    cout<<"Not Present ";
        cout<<cmp<<'\n';
    }

    return 0;
}
