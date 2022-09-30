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
            string c="",a="";
            for (int j=0;j<256;j++)
            {
                arr[j]=0;
            }
            //arr[s[i]] = 1;

            int j=i;
            while (j<length)
            {
                if(arr[s[j]]==0)
                {
                   
                    arr[s[j]]=1;
                    count++;
                    c+=s[j];
                }
                else if(arr[s[j]]==1)
                {
                    a+=s[j];
                    cout<<"Loop break called : "<<a<<endl;;
                    
                    break;
                }
                j++;

            }
             cout<<"\nString: "<<c<<" nnnn   "<<a<<endl;

            if (count>max)
            {
                max = count;
            }
        }
        
        return max;
}
};