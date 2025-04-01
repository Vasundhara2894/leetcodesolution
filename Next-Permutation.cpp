class Solution {
public:
vector<int> nextPermutation(vector<int>& A) {
        int breakpoint=-1;
        int n=A.size();
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                breakpoint=i;
                break;
            }
        }
        if(breakpoint==-1){
            reverse(A.begin(),A.end());
            return A;
        }
        for(int i=n-1;i>breakpoint;i--){
            if(A[i]>A[breakpoint]){
                swap(A[i],A[breakpoint]);
                break;
            }
        }
        
            reverse(A.begin()+breakpoint+1,A.end());
        
        return A;
        
    }
};