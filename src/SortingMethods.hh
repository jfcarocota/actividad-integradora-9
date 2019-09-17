class SortingMethods
{
private:
    /* data */
    static void Swap(int*, int*); 
public:
    SortingMethods(/* args */);
    ~SortingMethods();
    static const void ShellSort(int[], int);
    static void SelectionSort(int[], int); 
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