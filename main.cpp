#include <iostream>
#include <vector>

// Merge function to combine two sorted halves
void merge(std::vector<int>& arr, int low, int mid, int high) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    std::vector<int> left(leftSize);
    std::vector<int> right(rightSize);

    for (int i = 0; i < leftSize; i++) {
        left[i] = arr[low + i];
    }
    for (int j = 0; j < rightSize; j++) {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        arr[k++] = left[i++];
    }

    while (j < rightSize) {
        arr[k++] = right[j++];
    }
}

// Recursive merge sort function
void mergeSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    std::cout << "Enter the number of patients: \n";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid number of patients.\n";
        return 0;
    }

    std::vector<int> patientIDs(n);
    std::cout << "\nEnter the patient IDs:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> patientIDs[i];
    }

    std::cout << "\nOriginal Patient IDs:\n";
    for (int id : patientIDs) {
        std::cout << id << " ";
    }
    std::cout << "\n";

    mergeSort(patientIDs, 0, patientIDs.size() - 1);

    std::cout << "\nSorted Patient IDs:\n";
    for (int id : patientIDs) {
        std::cout << id << " ";
    }
    std::cout << "\n";

    return 0;
}
