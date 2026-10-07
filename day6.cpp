#include<iostream>
double getAverage(int arr[],int size){
    int total=0;
    for (int i=0;i<size;i++){
        total+=arr[i];
    }
    if(size==0) return 0.0;
    return (double)total/size;
}
int findMaxInArray(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max; 
}
int main(){
    int scores[5]={90,85,78,96,88};
    int length=5;

    std::cout<<"All scores:";
    for(int i=0;i<length;i++){
        std::cout<<scores[i]<<" ";
    }
    std::cout<<std::endl;

    double avg=getAverage(scores,length);
    std::cout<<"Max score is:"<<avg<<std::endl;
    
    int maxScore=findMaxInArray(scores,length);
    std::cout<<"Max score is:"<<maxScore<<std::endl;

    return 0;
}