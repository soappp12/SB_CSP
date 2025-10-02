# SB 6th time and for loops notes

import datetime

current = datetime.datetime.now()
hour = current.hour 

# print(f"The time in seconds since Jan 1, 1970: {epoch}")

 # print(f"The time is: {current}")
 # print(f"the hour is: {hour}")

# What is a loop? 
 # keeps going until a specific condition is met

# What are the two types of loops?
 # 1. For loop - for (variable) in (variable)
 # 2. While loops - infinite loops 
  # a break can break a while loop and stop it

# What is iteration
 # keep track of the loop

# What are lists? 
 # It lets you store multiple pieces of information within the same variable

# How do you make lists in python? 
 # surrounded by straight brackets [], every item in the list must be a proper data type

# How do you make for loops in python? 
 # for (variable) in (variable). Has "For" and "in"
# How do you make while loops in python
 # while True:
   # print("Oh NO!") 
# Good While loop

i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

import random

number = random.randint(1,20)
x = 1
while x != number:
    print("Duck")
    x += 1

print("Goose!")