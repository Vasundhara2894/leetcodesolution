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

// ARRAY -MEDIUM LEVEL
// NEXT PERMUTATION 
// Its like find the words in dictionary.we need to find just immediate permutation
//  intitally find breakpoint- current element< next element
// if no breakpoint just reverse the array
// swap the breakpoint number with the next greater number 
// reverse the array from breakpoint+1 to end (right part)
// tc-O(3N) SC-O(1)
