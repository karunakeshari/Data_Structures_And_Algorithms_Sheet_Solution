//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
bool static cmp(struct Item a,struct Item b){
    double p1=(double)a.value/(double)a.weight;
    double p2=(double)b.value/(double)b.weight;
    return p1>p2;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,cmp);
        double maxValue=0;
        for(int i=0;i<n;i++){
            if(W>=arr[i].weight){
                maxValue+=arr[i].value;
                W-=arr[i].weight;
            }
            else{
                maxValue+=(((double)arr[i].value/(double)arr[i].weight)*(double)W);
                W=0;
            }
        }
        return maxValue;
    }
        
};
//Time Complexity-O(NlogN)
//Space Complexity-O(1)