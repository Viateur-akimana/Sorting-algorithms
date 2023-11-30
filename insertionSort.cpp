#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int n;
    int temp;
    int arr[6]={23,4,5,34,90,10};
    cout << "THe unsorted array:"<<endl;
    for(int i=0;i< 6;i++){
       cout << arr[i] << " ";
    }
    for(int i=0; i < 6; i++){
        temp = arr[i];
        j=i-1;
        while (j>=0 && temp<arr[j])
        {
         arr[j+1]=arr[j];
         j--;
        }
        arr[j+1]=temp;
    }
    cout << "The sorted array is:" <<endl;
    for(int i=0;i<6;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}