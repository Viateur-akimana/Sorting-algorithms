#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int temp;
    int min;
    int arr[8]={12,56,76,8,9,43,2,14};
    cout <<"Unsorted array:" <<endl;
    for(int i=0;i<8;i++){
        cout <<arr[i] <<" ";
    }
    for(i=0;i<7;i++){
        min=i;
        for(j=i+1;j<8;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min] = temp;
        }
    }
    cout <<"The sorted array:";
    for(int i=0;i<8;i++){
        cout <<arr[i] <<" ";
    }

  return 0;
}