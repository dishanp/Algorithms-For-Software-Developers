	int countBuildings(int arr[], int n) {
	    int count = 1;
        int maxi = arr[0];
        
        for(int i = 1; i < n; i++)
        {
            if(arr[i] > maxi)
            {
                count++;
                maxi = arr[i];
            }
        }
        
        return count;
	}
