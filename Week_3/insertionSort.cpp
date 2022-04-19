#include <bits/stdc++.h>
#define ll long long
using namespace std;

void insertionSort(int arr[], int n){
    int shift=0, cmp=0;

    for(int i=1 ; i<n ; i++){
        int k=arr[i], j=i-1;
        while(j>=0 && arr[j]>k){
            cmp++;
            arr[j+1] = arr[j];
            shift++;
            j--;
        }
        arr[j+1]=k;
        shift++;
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
        
        insertionSort(arr, n);
    }

    return 0;
}
