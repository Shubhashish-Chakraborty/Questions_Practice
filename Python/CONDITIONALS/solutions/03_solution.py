def main(SCORE):

    if (SCORE < 60):

        return "GRADE : E"
    
    elif ((SCORE >= 60) and (SCORE <= 69)):

        return "GRADE : D"
    
    elif ((SCORE >= 70) and (SCORE <= 79)):

        return "GRADE : C"
    
    elif ((SCORE >= 80) and (SCORE <= 89)):

        return "GRADE : B"

    elif ((SCORE >= 90) and (SCORE <= 100)):

        return "GRADE : A"
    
    else:

        return "Give a Valid Score!!"
    
        

# while (True):

#     print()

#     score = int(input("Enter Score : "))

#     print(main(score))

#     print()


