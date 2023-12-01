#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int temp;
    int arr[8]={12,23,4,5,2,3,90,1};
    cout <<"Unsorted array:";
    for(int i=0;i<8;i++){
        cout <<arr[i] <<" ";
    }
     for(i=0;i<7;i++){
        for(j=i+1;j<8;j++){
            if(arr[i] > arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
     cout <<"Sorted array:";
     for(int i=0;i<8;i++){
        cout <<arr[i]<<" ";
     }
return 0;
}