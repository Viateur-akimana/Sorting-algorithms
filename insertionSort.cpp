#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int temp;
    int arr[8]={12,4,5,75,76,4,90,2};
    cout <<"The unsorted array:";
    for(int i=0;i<8;i++){
        cout <<arr[i] <<" ";
    }
    for(i=1;i<8;i++){
        temp = arr[i];
        j=i-1;
        while (arr[j]>temp && j>=0)
        {
           arr[j+1]=arr[j];
           j=j-1;
        }
        arr[j+1]=temp;
    }
    cout <<"SOrted array:";
    for(int i=0;i<8;i++){
        cout <<arr[i]<<" ";
    }
}