def mergeSorted(l1, l2):
        merged = l1 + l2
        merged.sort()
        return merged

print(mergeSorted([4,5,6],[1,2,3]))
