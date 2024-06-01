def main(N):


    sum = 0

    for n in range(1 , (N + 1)):

        if (n % 2 == 0):

            sum += n

    return sum


# print(main(100))