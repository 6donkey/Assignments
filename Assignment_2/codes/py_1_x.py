# Given probabilities P(A) = 3/5, P(B) = 2/3

P_A = 3/5
P_B = 2/3

# We need to  find probability of event A intersection B, for which we need union

intersection = P_A * P_B # Since it is given that they are independent

union = P_A + P_B - intersection

print(union)