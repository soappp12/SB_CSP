# SB 6th Financial Caculator

monthly_income = 4000
rent = 400
groceries = 300
utilities = 320
transportation = 480
savings = monthly_income * .2
print("my monthly income is", monthly_income)
print("my rent is", rent)
print("my grocery cost is", groceries)
print("my utility cost is", utilities)
print("my transportation cost is", transportation)
print("my rent is", rent, "which is",  rent / monthly_income*100, "percent of my income")
print("my grocery cost is", groceries, "which is",  groceries / monthly_income*100, "percent of my income")
print("my utility cost is", utilities, "which is",  utilities / monthly_income*100, "percent of my income")
print("my transportation cost is", transportation, "which is",  transportation / monthly_income*100, "percent of my income")
print("I save 20 percent of my income, which is", savings)
total = rent + utilities + transportation + groceries + savings
leftover = monthly_income - total
print("I have", leftover, "dollars to spend")
