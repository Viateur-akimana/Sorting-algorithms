#include<iostream>
using namespace std;

int main(){
    int i;
    int j;
    int temp;
    int arr[8]={40,65,23,1,45,90,56,39};
    //displaying unsorted array
    cout << "Unsorted array:" <<endl;
    for(int i=0;i<8;i++){
        cout << arr[i] <<" ";
    }
     cout <<endl;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout <<"Sorted array:"<<endl;
    for(int i=0;i<8;i++){
    cout << arr[i] <<" ";
}
return 0;
}
