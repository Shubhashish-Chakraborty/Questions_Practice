def FACTORIAL_FOR_LOOP(NUMBER):
    fact = 1
    for i in range(1 , (NUMBER + 1)):
        fact *= i
    return fact

def FACTORIAL_WHILE_LOOP(NUMBER):
    fact = 1
    i = 1
    while (i <= NUMBER):
        fact *= i
        i+=1
    return fact