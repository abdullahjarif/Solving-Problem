//Facebook Interview question 29
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
    for (int i = 0; i < n; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
}
void printList(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int a[]={2,0,1,0,2};
    printList(a,5);
    selectionSort(a,5);
    printList(a,5);
    return 0;
}

