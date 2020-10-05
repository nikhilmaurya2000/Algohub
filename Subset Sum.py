# Sum of subset using Backtracking

# Set and the sum required 
n = int(input('Enter the number of elements in the list '))

print('Enter the elements of the list\n')
setVal = []
for i in range(n):
    item = int(input())
    setVal.append(item)

k = int(input('Enter the required sum '))
#setVal = [10, 7, 5, 18, 12, 8, 15]

# Subset
subset = []

# Display function
def display(subset):
    for i in subset:
        print(i,end=" ")
    print()
    
# Subset function
def subsetSum(setVal,n,k,subset,x,total):
    if(total == k):
        display(subset)
        
    else:
        if(total < k and x < n):
            for i in range(x,n):
                subset.append(setVal[i])
                total += setVal[i]
                subsetSum(setVal,n,k,subset,i+1,total)
                total -= setVal[i]
                subset.pop()
                

subsetSum(setVal,n,k,subset,0,0)
        
    