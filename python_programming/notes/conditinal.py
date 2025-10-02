#SB 6th conditional notes

#What puts something inside of the “if” statement?
# When its indented below it 

num = 12

if num < 10:
    print(f"{num} is a single digit number")

# What do if statements do?
 # check "if" true or false statement 


# What are boolean statements? 
 # the "num < 10:" is an example of a boolean statement

# What do else statements do?
 # if its not true we do something else

else:
    print(f"{num} is not a single digit number")


# What kind of statement do you use if you have more than 2 needed outcomes?
 # elif statement (else if)
 # elif (variable) == ( ) 

# What do each of the different symbols mean in conditionals?

# < less than
# > greater than
# <= less than or equal to
# >= greater than or equal to
# == to see if its equal
# ! not equal

# What are the 3 logical operators?
 # and, or, not

if num>=0 and num < 10:
    print(f"{num} is a single digit number")
elif num < 25 or num == 50:
    print(f"Wow {num} is a real cool number!")
elif not num < 100:
    print(f"{num} is a large number")
else:
    print(f"You types in a {num}")
# What are logical operators for?
 # allows us to check two or more conditions at the same time
 # not: takes whatever it is and does the opposite
 # and: means both must be true
# or: means only 1 must be true

# What does a nested conditional statement do?
 # inside of the condition you can have another condition 
