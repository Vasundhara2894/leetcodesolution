class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0;
        int r=0;
        int n=g.size();
        int m=s.size();
        while(r<n && l<m){
            if(g[r]<=s[l]){
                r+=1;
                l++;
            }
            else{
                l=l+1;
            }

        }
        return r;


        
    }
};