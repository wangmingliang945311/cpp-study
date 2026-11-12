#include<iostream>
using namespace std;
int main(){
    int n=0,m=0;
    cin>>n>>m;
    int a[105][105];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int sum=0;
    int maxVa1=a[0][0];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+=a[i][j];
            if(a[i][j]>maxVa1){
                maxVa1=a[i][j];
            }
        }
    }
    cout<<sum<<" "<<maxVa1<<endl;
    return 0;
}