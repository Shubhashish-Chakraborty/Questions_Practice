def main(PASSWORD):

    # Check if a password is "Weak", "Medium", or "Strong". Criteria: < 6 chars (Weak), 6-10 chars (Medium), >10 chars (Strong)

    if (len(PASSWORD) <= 6 ):

        return "Weak"
    
    elif ((len(PASSWORD) > 6) and (len(PASSWORD) <= 10)):

        return "Medium"
    
    elif (len(PASSWORD) > 10):

        return "Strong"
    

# while (True):

#     print()

#     password = input("Enter Password: ")

#     print(main(password))

#     print()