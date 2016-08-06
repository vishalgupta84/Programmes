class Solution:
    # @param A : tuple of integers
    # @return a strings
    def count(number):
        c=0
        while(number):
            c=c+1
            number=number//10
        return c
    def compare(first,second):
        count1=count(first)
        count2=count(second)
        tmp=first
        first=tmp*(10**count2)+second
        second=second*(10**count1)+tmp
        if(second>first):
            return True
        return False
    def largestNumber(self, A):
        length=len(A)
        for i in range(0,length):
            flag=0
            for j in range(0,length-i-1):
                if (compare(A[j],A[j+1])):
                    tmp=A[j]
                    A[j]=A[j+1]
                    A[j+1]=tmp
                    flag=1
            if(flag==0):
                break
        string=''
        for i in range(0,length):
            string=string+str(A[i])
        #return string
        print string
s=Solution()
print "enter number"
n=input()
A=[0]*n
print "enter array"
for i in range(0,n):
    A[i]=input()
s.largestNumber(self,A)