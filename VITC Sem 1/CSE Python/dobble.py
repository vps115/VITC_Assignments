import string
import random

n = int(input("No. of symbols in the card: "))
s = list(string.ascii_letters)

card1 = [0]*n
card2 = [0]*n

fp1 = random.randrange(n)
fp2 = random.randrange(n)

cs = random.choice(s)
s.remove(cs)

card1[fp1] = card2[fp2] = cs

for i in range(n):
    if i!=fp1:
        cs1 = random.choice(s)
        card1[i] = cs1
        s.remove(cs1)
    if i!=fp2:
        cs1 = random.choice(s)
        card2[i] = cs1
        s.remove(cs1)
        
print(card1)
print(card2)

ch = input("Common Symbol? ")

if ch == cs:
    print("Identified")
else:
    print("Try Again")    





