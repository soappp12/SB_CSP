# SB 6th function notes

# What a function is: a set of instructions that are executed when you call on a key word (print,input)


# Why we use functions: to save space in your code


# How to write a function:
 # the indented lines must line up to work

def welcome():
    name = input("What is your name\n")
    print(f"Hello {name}!")

print(f"The function is over!")

welcome()

def add(number, number_two): #Parameters given when we define the function
    number = number + number_two
    print(number)

num_one = 12
num_two = 14
add(num_one, num_two) #Arguements are given when we call the function
add(4, 8)
add(9, 700)
add(87, 45)


# What parameters and arguments are: Parameters are given when we define the function, arguements are given when we call the function



# How to use parameters and arguments in python: parameters go inside the () when I define my function, the arguement takes the place of the peice of information you give it



# What return statements are: take what happens inside the function and put it back to where you called the function



# How to use return statements in a program:

def clean(info):
    return info.strip().lower()
name = input("What is your name?")
quest = input("What is your quest?")
color = input("What is your favorite color?")

print(f"Hello, {clean(name)}. I have heard you are trying to {clean(quest)}, that is super cool! Are you sure {clean(color)} is your favorite color?")