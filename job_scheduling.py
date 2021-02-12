# Python program for weighted job scheduling using Dynamic Programming and Binary Search 
#almost like stickler thief 

# Class to represent a job 
class Job: 
	def __init__(self, start, finish, profit): 
		self.start = start 
		self.finish = finish 
		self.profit = profit 

def binarysearch(job, i):
    low = 0
    high = i-1
    while (low<=high):
        mid = int((low+high)/2)
        #print(f"low = {low}, high = {high}, mid= {mid}")
        if (job[mid].finish<=job[i].start):
            if (job[mid+1].finish<=job[i].start):
                low =  mid+1
            else:
                return mid
        else:
            high = mid-1
    return -1

def maxprofit(job):
    sorted(Job, key = lambda j: j.finish)
    n = len(job)
    dp = [0 for i in range(n)]
    dp[0] = Job[0].profit
    print(dp)
    for i in range(1, n):
        including = Job[i].profit
        res =  binarysearch(Job, i)
        if (res!=-1):
            including += dp[res]
        dp[i] = max(including, dp[i-1])
    print(dp)




Job = [Job(1, 2, 50), Job(3, 5, 20), Job(6, 19, 100), Job(5, 80, 250), Job(2, 100, 200)] 
print("Optimal profit is")
maxprofit(Job)
#print schedule(job) 
