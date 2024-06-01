def main(WEATHER):


    if (WEATHER.lower() == "sunny"):

        return "Go for a Walk"

    elif (WEATHER.lower() == "rainy"):

        return "Read a Book"
    
    elif (WEATHER.lower() == "snowy"):

        return "Build a Snowman"
    
    else:

        return "Input Invalid, TryAgain!"
    
    
# while (True):

#     print()

#     weather = input(f"Enter Weather {["sunny" , "rainy" , "snowy"]} : ")

#     print(main(weather))

#     print()