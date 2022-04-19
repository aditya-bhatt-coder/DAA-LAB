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
        int n, q; cin>>n; int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        cin>>q;
        
        //Linear Search
        int cmp=0, f=false;
        for(int i=0 ; i<n ; i++){
            cmp++;
            if(arr[i]==q){
                f=true; break;
            }
        }
        if(f)   cout<<"Present ";
        else    cout<<"Not Present ";
        cout<<cmp<<'\n';
    }

    return 0;
}
