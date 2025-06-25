#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int row=1;
    while (row<=n) {
        int space= n-row ;
        while (space) {
            cout <<" ";
            space = space-1;
        }
        int j=1;
        while (j<=row) {
            cout<<j;
            j=j+1;
        }
        row=row+1;
        cout<<endl;
    }

}