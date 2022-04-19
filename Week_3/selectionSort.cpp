#include <bits/stdc++.h>
#define ll long long
using namespace std;

void selectionSort(int arr[], int n){
    int shift=0, cmp=0;

    for(int i=0 ; i<n-1 ; i++){
        int minInd = i;
        for(int j=i+1 ; j<n ; j++){
            cmp++;
            if(arr[minInd]>arr[j])
                minInd = j;
        }
        shift++;swap(arr[i],arr[minInd]);
    }

    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\ncomparisions = "<<cmp;
    cout<<"\nshifts = "<<shift<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n; int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        
        selectionSort(arr, n);
    }

    return 0;
}
