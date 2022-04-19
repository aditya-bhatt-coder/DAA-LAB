#include <bits/stdc++.h>
#define ll long long
using namespace std;

void merge(int a[], int l, int mid, int r){
    int b[r-l+1];
    int i=l, j=mid+1, k=l;
    
    while(i<mid+1 && j<r+1){
        if(a[i]<a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        while (j<r+1){
            b[k] = a[j];
            j++;k++;
        } 
    }
    else if(j>r){
        while(i<mid+1){
            b[k] = a[i];
            i++;k++;
        }
    }

    for(int i=l ; i<r+1 ; i++)
        a[i] = b[i];
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n; int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        
        mergeSort(arr, 0, n-1);
        
//         for(int i=0 ; i<n ; i++)
//             cout<<arr[i]<<" ";
//         cout<<'\n';

        bool found=false;
        for(int i=0 ; i<n-1 ; i++)
            if(arr[i]==arr[i+1]){
                found=true; break;
            }

        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
