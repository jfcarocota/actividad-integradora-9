class SortingMethods
{
private:
    /* data */
    static void Swap(int*, int*); 
    static void Heapify(int[], int, int);
public:
    SortingMethods(/* args */);
    ~SortingMethods();
    static const void ShellSort(int[], int);
    static void SelectionSort(int[], int); 
    static void HeapSort(int[], int);
};

SortingMethods::SortingMethods(/* args */)
{
}

SortingMethods::~SortingMethods()
{
}

const void SortingMethods::ShellSort(int arr[], int n) 
{ 
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        for (int i = gap; i < n; i += 1) 
        { 
            int temp = arr[i]; 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap]; 
            }
            arr[j] = temp; 
        } 
    } 
} 

void SortingMethods::Swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void SortingMethods::SelectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        SortingMethods::Swap(&arr[min_idx], &arr[i]);  
    }  
}  

void SortingMethods::Heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }  
    if (r < n && arr[r] > arr[largest])
    {
        largest = r; 
    } 
    if (largest != i) 
    { 
        std::swap(arr[i], arr[largest]); 
        SortingMethods::Heapify(arr, n, largest); 
    } 
} 
  
void SortingMethods::HeapSort(int arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        SortingMethods::Heapify(arr, n, i); 
    } 
  
    for (int i=n-1; i>=0; i--) 
    { 
        std::swap(arr[0], arr[i]); 
        SortingMethods::Heapify(arr, i, 0); 
    } 
} 