# SB 6th String notes

print("I did it!")

# 1. What makes something a string?
 # a collection of symbols that are held together by quotation marks. Every user input is a string
 # examples of strings
first_name = input("What is your first name?:\n").strip().title()

last_name = input("What is your last name:\n").strip().title()

full_name = first_name + " " + last_name

sentence = "The quick brown fox jumps over the lazy dog." 

print("Welome to my program", full_name + "!")

# 2. Why do we have strings?
 # they are the only data type that allows us to use letters

# 3. How do stupid proofing and sanitization relate to each other?
 # 
# 4. What is debugging?
 # a bug is any erro in your code that keeps it from running or making it run inproperly
 # debugging is fixing problems in my code
 # syntax error: writing a variable wrong, idents where they arent supposed to be
string = 'this is my string'
 # logic error: code does something that we didnt expect it to do
num0ne = "1"
numTwo = "3"
print(num0ne + numTwo)
 # run-time error: when there is a problem in the code that would break the code when it trys to run

# 5. How do you debug the different types of errors?
 # you fix the error yourself
# 6. Describe what each of the methods below does:
 # find() retuns the index number of that paticular item
print(sentence.find("brown"))
print(sentence[10:15]) # slice

 # concatenate (add) you add strings together

 # upper() makes the word uppercase

 # lower() makes the word lowercase 

 # strip() gets rid of all the extra spacing before and after a code