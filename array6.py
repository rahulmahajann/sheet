#User function Template for python3

class Solution:    
    #Function to return the count of number of elements in union of two arrays.
    def doUnion(self,a,n,b,m):
        a=list(set(a))
        b=list(set(b))
        n=len(a)
        m=len(b)
        ans=len(a)+len(b)
        count=0
        if(n<=m):
            for _ in range(n):
                if(a[_] in b):
                    count+=1
        else:
            for _ in range(m):
                if(b[_] in a):
                    count+=1
        
        return ans-count
        #code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        
        n,m=[int(x) for x in input().strip().split()]
        
        a=[int(x) for x in input().strip().split()]
        b=[int(x) for x in input().strip().split()]
        ob=Solution()
        
        print(ob.doUnion(a,n,b,m))
# } Driver Code Ends