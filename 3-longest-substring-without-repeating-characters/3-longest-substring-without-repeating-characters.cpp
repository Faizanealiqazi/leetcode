class Solution {
public:
    int lengthOfLongestSubstring(string s) 
{
        int length  = s.length();
        int arr[256];
        int max=0,count=0;
        for(int i=0;i<length;i++)
        {
            count=0;
            for (int j=0;j<256;j++)
            {
                arr[j]=0;
            }
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