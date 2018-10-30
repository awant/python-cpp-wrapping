import pyarray
import time
import random
import numpy as np

def test_performance():
    mod, size = 10000, 100000
    a = [random.randint(-mod, mod) for _ in range(size)]
    b = [random.randint(-mod, mod) for _ in range(size)]
    a_np = np.array(a)
    b_np = np.array(b)
    a_pa = pyarray.array(a)
    b_pa = pyarray.array(b)

    p0 = time.time()
    sum1 = [x+y for x, y in zip(a, b)]
    p1 = time.time()
    sum2 = a_np + b_np
    p2 = time.time()
    sum3 = a_pa + b_pa
    p3 = time.time()
    assert(all(sum1[i] == sum3[i] for i in range(size)))
    print('list time:\t{:.5f}'.format(p1-p0))
    print('numpy time:\t{:.5f}'.format(p2-p1))
    print('pyarray time:\t{:.5f}'.format(p3-p2))

def test_sum():
    a, b = [1,2,3], [1,3,7]
    a1, b1 = pyarray.array(a), pyarray.array(b)
    print(a1)
    print('+')
    print(b1)
    print('=')
    print(a1+b1)

if __name__ == '__main__':
    test_performance()
    test_sum()

