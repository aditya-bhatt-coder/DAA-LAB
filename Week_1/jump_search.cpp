#include <bits/stdc++.h>
#define ll long long
using namespace std;

int jumpSearch(int arr[], int n, int key){
    float jump = sqrt(n);
    int steps = jump;
    int prev = 0;
    while(arr[int(min(steps,n)-1)]<key){
        prev = steps;
        steps += jump;
        if(prev>=n)
            return -1;
    }
    while(arr[int(prev)]<key){
        prev += 1;
        if(prev==min(steps,n))
            return -1;
    }
    if(arr[int(prev)]==key)
        return prev;
    return -1;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, key; cin>>n; int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        cin>>key;
        
        if(jumpSearch(arr, n, key)==-1)
            cout<<"NOT PRESENT";
        else
            cout<<"PRESENT";
    }

    return 0;
}
