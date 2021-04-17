#include "iostream"
using namespace std;

void swap(string *xp, string *yp)
{
    string temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void heapify(string m[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && m[l] > m[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && m[r] > m[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(m[i], m[largest]);

        // Recursively heapify the affected sub-tree
        heapify(m, n, largest);
    }
}

void BubbleSort(string m[12], int n){
  for (int i = 0; i < n-1; i++)
  for (int j = 0; j < n-i-1; j++)
      if (m[j] > m[j+1])
          swap(&m[j], &m[j+1]);

}
void selectionSort(string m[12], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (m[j] < m[min_idx])
            min_idx = j;

        swap(&m[min_idx], &m[i]);
    }
}
void heapSort(string m[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(m, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(m[0], m[i]);

        // call max heapify on the reduced heap
        heapify(m, i, 0);
    }
}
size_t getMax(string arr[], int n){
    size_t max = arr[0].size();
    for (int i = 1; i < n; i++){
        if (arr[i].size()>max)
            max = arr[i].size();
    }
    return max;
}

void countSort(string a[], int size, size_t k){
    string *b = NULL; int *c = NULL;
    b = new string[size];
    c = new int[257];



    for (int i = 0; i <257; i++){
        c[i] = 0;
        //cout << c[i] << "\n";
    }
    for (int j = 0; j <size; j++){
        c[k < a[j].size() ? (int)(unsigned char)a[j][k] + 1 : 0]++;            //a[j] is a string
        //cout << c[a[j]] << endl;
    }

    for (int f = 1; f <257; f++){
        c[f] += c[f - 1];
    }

    for (int r = size - 1; r >= 0; r--){
        b[c[k < a[r].size() ? (int)(unsigned char)a[r][k] + 1 : 0] - 1] = a[r];
        c[k < a[r].size() ? (int)(unsigned char)a[r][k] + 1 : 0]--;
    }

    for (int l = 0; l < size; l++){
        a[l] = b[l];
    }

    // avold memory leak
    delete[] b;
    delete[] c;
}


void radixSort(string b[], int r){
    size_t max = getMax(b, r);
    for (size_t digit = max; digit > 0; digit--){ // size_t is unsigned, so avoid using digit >= 0, which is always true
        countSort(b, r, digit - 1);
    }

}

void printArray(string m[12], int size) {
    for (int i = 0; i < size; i++)
        cout << m[i] << " ";
    cout << endl;
}

int main() {
  string month[12]={"Jan", "Feb", "March", "April", "May", "June",
			 "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int n = 12;
  cout << "Bubble Sort: " << endl;
  BubbleSort(month, n);
  printArray(month, n);
  cout << "Selection Sort: " << endl;
  selectionSort(month, n);
  printArray(month, n);
  cout << "HeapSort: " << endl;
  heapSort(month, n);
  printArray(month, n);
  cout << "RadixSort: " << endl;
  radixSort(month, n);
  printArray(month, n);
  return 0;
}
