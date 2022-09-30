class Solution {
public:
    int lengthOfLongestSubstring(string s) 
{
        int length  = s.length();
        
        int max=0,count=0;
        for(int i=0;i<length;i++)
        {
            count=0;
            int arr[128]={0};
            int j=i;
            while (j<length)
            {
                if(arr[s[j]]==0)
                { 
                    arr[s[j]]=1;
                    count++;
                }
                else if(arr[s[j]]==1)
                {
                    break;
                }
                j++;
            }
            if (count>max)
            {
                max = count;
            }
        }
        
        return max;
}
};