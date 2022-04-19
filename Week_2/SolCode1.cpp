#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n; int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        int key; cin>>key;

        //Solution
        int start=n, end=n, l=0, r=n-1, mid;
        while(l<=r){
            mid = (r+l)/2;
            if((arr[mid]==key&&mid==0) || (arr[mid]==key&&arr[mid-1]!=arr[mid])){
                start = mid;
                break;
            }
            else if(key<arr[mid]){
                r = mid-1;
            }
            else if(key>arr[mid]){
                l = mid+1;
            }
        }
        l=0; r=n-1;
        while(l<=r){
            mid = (r+l)/2;
            if((arr[mid]==key&&mid==n-1) || (arr[mid]==key&&arr[mid+1]!=arr[mid])){
                end = mid;
                break;
            }
            else if(key<arr[mid]){
                r = mid-1;
            }
            else if(key>arr[mid]){
                l = mid+1;
            }
        }

        cout<<key<<" - "<<end-start<<'\n';
    }

    return 0;
}
