#include<iostream>
using namespace std;
int partition(int a[], int low, int high) {   
    int pivot = a[high];
    int i = low - 1;            
    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;  
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    i++;
    int temp = a[i];
    a[i] = pivot;    
    a[high] = temp;
    return i;
}    

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pidx = partition(a, low, high);  
        quicksort(a, low, pidx - 1);  
        quicksort(a, pidx + 1, high);  
    }
}

int main() {
    int a[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);
    quicksort(a, 0, n - 1);    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
