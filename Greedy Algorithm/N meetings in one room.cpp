class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    struct meetings{
        int start;
        int end;
        int pos;
    };
    bool static cmp(struct meetings a,struct meetings b){
        if(a.end<b.end) return true;
        if(a.end>b.end) return false;
        else if(a.pos<b.pos) return true;
        return false;
    }
    int maxMeetings(int s[], int e[], int n)
    {
        // Your code here
        struct meetings meet[n];
        for(int i=0;i<n;i++){
            meet[i].start=s[i];
            meet[i].end=e[i];
            meet[i].pos=i+1;
        }
        sort(meet,meet+n,cmp);
        int ans=0;
        int limit=-1;
        for(int i=0;i<n;i++){
            if(meet[i].start>limit){
                ans++;
                limit=meet[i].end;
            }
        }
        return ans;
    }
};