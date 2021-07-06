int largest(int arr[], int n) 
{
    int max=-32000;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
