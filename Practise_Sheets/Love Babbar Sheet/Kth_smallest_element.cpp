class Solution
{
public:
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    int quickSelect(int arr[], int low, int high, int k)
    {
        if (low <= high)
        {
            int pivotIdx = partition(arr, low, high);

            if (pivotIdx == k)
            {
                return arr[pivotIdx];
            }
            else if (pivotIdx > k)
            {
                return quickSelect(arr, low, pivotIdx - 1, k);
            }
            else
            {
                return quickSelect(arr, pivotIdx + 1, high, k);
            }
        }
        return -1;
    }

    int kthSmallest(int arr[], int l, int r, int k)
    {
        if (k < 1 || k > r + 1)
        {
            return -1;
        }

        return quickSelect(arr, l, r, k - 1);
    }
}