/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int maxDead=0;
        for(int i=0;i<n;i++){
            maxDead=max(maxDead,arr[i].dead);
        }
        vector<int> v(maxDead+1,-1);
        sort(arr,arr+n,cmp);
        int jobs=0,maxProfit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(v[j]==-1){
                    v[j]=arr[i].profit;
                    jobs++;
                    maxProfit+=arr[i].profit;
                    break;
                }
            }
        }
        vector<int> ans;
        ans.push_back(jobs);
        ans.push_back(maxProfit);
        return ans;
    } 
};
//Time Complexity-O(N*M)
//M is max deadline
//Space Complexity-O(M)