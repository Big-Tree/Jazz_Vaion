import numpy as np

def sumOfSquaresEven(lst):
    lstNp = np.asarray(lst)
    mask = lstNp % 2 == 0
    return sum(lstNp[mask]**2)

print(sumOfSquaresEven([1,2,3,4]))

