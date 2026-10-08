#include<iostream>
double getAverage(double arr[],int size){
    double total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    return (double)total/size;
}
double findMaxInArray(double arr[],int size){
    double max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    double scores[5]={99,93,85,66,75};
    int lenght=5;

    std::cout<<"All scores is:";
    for(int i=0;i<lenght;i++){
        std::cout<<scores[i]<<" ";
    }

    double avg=getAverage(scores,lenght);
    std::cout<<"Average score is:"<<avg<<std::endl;

    double max=findMaxInArray(scores,lenght);
    std::cout<<"Max score is:"<<max<<std::endl;

    return 0;
}