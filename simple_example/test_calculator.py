import calculator

if __name__ == '__main__':
    lhs, rhs = 1, 2
    result = calculator.sum(lhs, rhs)
    assert(lhs + rhs == result)
    print('got: {}, {}, sum is: {}'.format(lhs, rhs, result))

