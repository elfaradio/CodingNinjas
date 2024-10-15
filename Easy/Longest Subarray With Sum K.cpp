int longestSubarrayWithSumK(vector<int> a, long long k) {


    long long s=0,ans=-1;
    long long l=0;
    for(int i=0;i<a.size();i+=1)
    {
        s+=a[i];
        while(s>k)
        {
            s-=a[l++];

        }
        if(s==k)
        {
            ans=max(ans,i-l+1);
        }
    }
    return ans;

    // Write your code here
}
