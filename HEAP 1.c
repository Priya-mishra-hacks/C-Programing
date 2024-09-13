/*Heap sort in c*/
#include<stdio.h>
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//A utility function to print array of size n
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
//TO HEAPIFY A SUB TREE ROOTED WITH NODE I WHICH IS AN INDEX IN ARR[].N IS SIZE OF HEAP
void heapify(int arr[], int N, int i)
{
    // Find largest among root, left child and right child, Initialize largest as root
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2;
 
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest]) 
        largest = left;
 
    // If right child is larger than largest so far
    if (right < N && arr[right] > arr[largest]) 
        largest = right;
 
   
 // Swap and continue heapifying if root is not largest 
    // If largest is not root
    if (largest != i) 
	{
 
        swap(&arr[i], &arr[largest]); 
        // Recursively heapify the affected sub-tree
        heapify(arr, N, largest);
    }
}
 
// Main function to do heap sort
void heapSort(int arr[], int N)
{
 int i;
    // Build max heap
    for (i = N / 2 - 1; i >= 0; i--) 
        heapify(arr, N, i); 
    // Heap sort
    for (i = N - 1; i >= 0; i--) 
	{ 
        swap(&arr[0], &arr[i]); 
        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}
 
void main() 
{ 
	int arr[10], n, i;
	printf("Enter number of elements : ");
	scanf("%d", &n); 
	printf("Enter %d Numbers:", n); 
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]); 
	heapSort(arr, n); 	
printArray(arr, n); }

