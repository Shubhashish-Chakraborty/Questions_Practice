def main(AGE):

    if (AGE < 13):

        return "CHILD"
    
    elif ((AGE >= 13) and (AGE <= 19)):
        
        return "TEENAGER"

    elif ((AGE >= 20) and (AGE <= 59)):
        
        return "ADULT"

    elif (AGE >= 60):
        
        return "SENIOR"
    

# while (True):

#     print()
#     age = int(input("Enter Age : "))

#     print(main(age))

#     print()