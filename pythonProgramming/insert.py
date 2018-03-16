def fn(v, lst=[]):
    print("v = ", v, " lst = ", lst)
    lst.insert(0,v)
    print(lst)
fn(9)
fn(16, [1, 2])
fn([10], [3,4])
fn([11])
