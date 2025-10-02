# SB 6th Time of day 

import datetime

time = int(input("What time is it in military time?"))

if time <= 11:
    print("Good morning!")
elif time <= 17:
    print("Good afternoon!")
elif time <= 24:
    print("Good evening!")
else:
    print("Thats more hours that exist in a day")