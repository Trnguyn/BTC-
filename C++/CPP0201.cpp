#include <iostream>
using namespace std;

void merge(long long a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Tạo mảng tạm
    long long L[50000], R[50000];
    for (int i = 0; i < n1; i++) L[i] = a[left + i];
    for (int i = 0; i < n2; i++) R[i] = a[mid + 1 + i];

    // Gộp 2 mảng
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }

    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(long long a[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int main(){
    int test,n;
    long long a[100000];
    cin >> test;
    while(test > 0){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        mergeSort(a, 0, n - 1);

        long long best = a[1] - a[0];
        for(int i = 1; i + 1 < n; i++){
            long long diff = a[i+1] - a[i];
            if(diff < best){
                best = diff;
            }
        }
        cout << best << endl;
        test --;
    }
    return 0;
}