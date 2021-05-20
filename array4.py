class Solution:
    def sort012(self,arr,n):
        # code here
        n0=arr.count(0)
        n1=arr.count(1)
        n2=arr.count(2)
    
        arr.clear()
        
        for _ in range(n0):
            arr.append(0)
        
        for _ in range(n1):
            arr.append(1)
        
        for _ in range(n2):
            arr.append(2)
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        ob=Solution()
        ob.sort012(arr,n)
        for i in arr:
            print(i, end=' ')
        print()

# } Driver Code Ends