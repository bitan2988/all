#Program to find k-th element from two sorted arrays
#https://www.youtube.com/watch?v=Q3JUfHpffIg
#https://www.youtube.com/watch?v=tmu50Fs4v54

def kth(a, b, s1, s2, e1, e2, k):
    if (s1==e1):
        return print(b[e2])
    if (s2==e2):
        return print(a[e1])
    
    mid1 = (s1+e1)//2
    mid2 = (s2+e2)//2
    #in this case "k" will lie  on right of both mid1 and mid2 as we dont have sufficient elements on our left
    #but we are sure that the values on left will sure be on left of "k" or k will be on their right
    #so we remove the values from the left
    #we also increment "k" and mid-1 from its left are removed and thus its position will be left shifted afteer their removal
    #eg. earlier--> abcdeh"k"lm   after removal of 4 elements from left "k" new position will be  --> eh"k"lm
    #               123456"7"89                                                                       12"3"45  
    if (mid1+mid2<k):
        if (a[mid1]>b[mid2]):
            return kth(a, b, s1, s2+mid2+1, e1, e2, k-mid2-1)
            #as "b" is the array with smaller values so the values  of "b" on left must be preceeding "k" in final array so we remove them as k will in their right
        else:
            return kth(a, b, s1+mid1+1, s2, e1, e2, k-mid1-1)
            #as "a" is the array with smaller values so the values  of "a" on left must be preceeding "k" in final array so we remove them as k will in their right
    
    
    #here we will remove values from right as "k" must lie on left of  mid1 and mid2
    else:
        if (a[mid1]>b[mid2]):   #here since "a" is the array with larger values and we are sure "k" will lie on left, thus we remove the right portion of "a"
            return kth(a, b, s1, s2, mid1, e2, k)   #as we are removing values from right of "k" thus its position wont change
        else:        #here "b" is the array with larger values thus we remove the right portion of "b"
            return kth(a, b, s1, s2, e1, mid2, k)

if __name__ == "__main__":
    a = [2, 3, 6, 7, 9]
    b = [1, 4, 8, 10]
    kth(a, b, 0, 0, len(a), len(b),5)
