#include <iostream>
using namespace std;

void quickSort(int a[],int l,int r){
    int p = a[(l+r)/2];
    int i = l;
    int j = r;

    while (i <= j){
        while(a[i] < p){
            i++;
        }
        while(a[j] > p){
            j--;
        }
        if(i <= j){
           int temp = a[i];
           a[i] = a[j];
           a[j] = temp;
            i++;
            j--;
        }
    }
    if(i < r){
        quickSort(a, i, r);
    }
    if(l < j){
        quickSort(a, l, j);
    }
}

int main(){
    int n;
    int ar[n];

    cout<<"nhap so luong mang: ";
    cin>>n;
    for(int i = 0;i < n; i++){
        cout<<" nhap a["<<i<<"]: ";
        cin>>ar[i];
    }
    quickSort(ar,0,n-1);
    cout<<"mang da sap xep: "<<endl;
     for(int i = 0;i < n; i++){
        cout<<ar[i]<<"\t";
    }
    return 0;
}
