class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int maxPlat=1,used_plat=1;
    	int i=1,j=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        used_plat++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        used_plat--;
    	        j++;
    	    }
    	    if(used_plat>maxPlat){
    	        maxPlat=used_plat;
    	    }
    	}
    	return maxPlat;
    }
};
//Time Complexity-O(NlogN)
//Space Complexity-O(N)