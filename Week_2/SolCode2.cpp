#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n; int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        int a = -1, b = -1, c = -1;

        for (int i=0; i<n; i++){
            for (int j=i+1 ; j<n ; j++){
                for (int k=j+1 ; k<n ; k++){
                    if(arr[i] + arr[j] == arr[k]){
                        a = i;
                        b = j;
                        c = k; break;
                    }
                }
            }
        }

        if (a != -1 && b != -1 && c != -1)
            cout << a+1 << " " << b+1 << " " << c+1 << endl;
        else
            cout << "No sequence found." << endl;
    }

    return 0;
}
