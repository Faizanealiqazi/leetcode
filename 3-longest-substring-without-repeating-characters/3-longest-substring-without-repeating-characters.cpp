class Solution {
public:
    int lengthOfLongestSubstring(string s) 
{
        int l  = s.length();
        
        int m=0,c=0;
        for(int i=0;i<l;i++)
        {
            c=0;
            int a[128]={0};
            int j=i;
            while (j<l)
            {
                if(a[s[j]]==0)
                { 
                    a[s[j]]=1;
                    c++;
                }
                else if(a[s[j]]==1)
                {
                    break;
                }
                j++;
            }
            if (c>m)
            {
                m = c;
            }
            if(m>l-i) break;
        }
        
        return m;
}
};