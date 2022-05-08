# (a) 
# Given probabilities P_A = 1/3, P_B = 1/5, and P_A_and_B = 1/15

P_A = 1/3
P_B = 1/5
P_A_and_B = 1/15

# from formula P_A_or_B = P_A + P_B - P_A_and_B

P_A_or_B = P_A + P_B - P_A_and_B

print(f"(a): P_A_or_B  = {P_A_or_B}")

# (b) 
# Given probabilities P_A = 0.35, P_A_or_B = 0.6, and P_A_and_B = 0.25

P_A = 0.35
P_A_and_B = 0.25
P_A_or_B = 0.6

# from formula P_A_or_B = P_A + P_B - P_A_and_B

P_B = P_A_and_B + P_A_or_B - P_A

print(f"(b): P_B       = {P_B}")

# (c) 
# Given probabilities P_A = 0.5, P_B = 0.35, and P_A_or_B = 0.7

P_A = 0.5
P_B = 0.35
P_A_or_B = 0.75

# from formula P_A_or_B = P_A + P_B - P_A_and_B

P_A_and_B = 0.5 + .35 - .7

print(f"(c): P_A_and_B = {round(P_A_and_B,2)}")