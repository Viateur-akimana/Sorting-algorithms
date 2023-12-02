#include<iostream>
using namespace std;

int a;
int lb;
int ub;

int mergeSort(a,lb,ub){
    if(lb<ub){
        mid = (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }

}

int merge(a,lb,mid,ub){
    i=lb;
    j=mid+1;
    k=ub;
        while (i<=mid &&j<=ub)
        {
            if(a[i] <= a[j]){
                b[k]=a[i];
                i++;
                k++
            }
            else{
                b[k]=b[j];
                j++;
                k++;
            }
        }
        if(i >mid){
            while (j<=ub)
            {
                b[k]=a[j];
                j++;
                k++;
            }
            
        }
        else{
            while(i<=mid){
                b[k]=a[i];
                i++;
                k++;
            }
        }
        for(k=lb;k<=ub;k++){
            a[k]=b[k];
        }
}

