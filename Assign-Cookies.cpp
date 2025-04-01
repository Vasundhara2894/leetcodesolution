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
// Greedy algorithm -Easy level problem

// WHAT IS THE PROBLEM?

// There are two arrays- one with greed factor and other with cookies The children have the greed factor to satisfy them we need to provide them the cookies whoose size is greater than the greed factor.
// We return the maximum number of children who are satisfied.
// SOLUTION Sort the two array so that smallest cookie gets assigned to least greedy child. 
// Take two pointer and start comapairing until condition fails.
// TIME COMPLEXITY- O(N log N+M log M+ M+N) SORT AND WHILE LOOP SPACE COMPLEXITY-O(1) CONSTANT SPACE
