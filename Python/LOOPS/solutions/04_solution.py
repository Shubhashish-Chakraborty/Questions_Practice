# Reverse a string using a loop

def EASY_METHOD(S):
    return S[::-1]


def main(s):
    reversed_string = ""
    for i in range(len(s) - 1 , -1 , -1):
        reversed_string += s[i]
    
    return reversed_string

print(main("illuminati"))