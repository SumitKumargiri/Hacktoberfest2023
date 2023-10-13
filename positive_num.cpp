#include<bits/stdc++.h>
using namespace std;

/*print the N number with the help of recursion*/

void print11(int i, int j){
    if(i<1)
    return;
    cout<<i<<" ";
    print11(i-1,j);
}
int main(){
    int j;
    cin>>j;
    print11(j,j);
} 
