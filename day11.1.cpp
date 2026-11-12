#include<iostream>
using namespace std;
int main(){
    int  n=0,m=0;
    int sum=0;
    int a[105][105];
    int max=a[0][0];
   
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=a[i][j];
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    cout<<sum<<" "<<max;
    return 0;
}