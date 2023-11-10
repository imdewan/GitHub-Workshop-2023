def fibonacci(n):
    fib_sequence = [0, 1]
    while len(fib_sequence) < n:
        next_num = fib_sequence[-1] + fib_sequence[-2]
        fib_sequence.append(next_num)
    return fib_sequence

n = 10  # Change this to the desired number of Fibonacci terms
fib_sequence = fibonacci(n)
print("Fibonacci Sequence:", fib_sequence)
