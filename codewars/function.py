def greater_than_9(x):
    return x > 9


def less_than_9(x):
    return x < 9


def _all(seq, fun):
    for i in seq:
        if not fun(i):
            return False
    return True


tes = _all((1, 2, 3, 4, 5), less_than_9)

print(tes)
