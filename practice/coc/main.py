import sys
import math
n = int(input())
dic = []
for i in range(n):
    dic.append(input())
m = int(input())
message = input()
distance = 0
words = message.split()
def hamming_distance(string1, string2): 
    # Start with a distance of zero, and count up
    distance = 0
    # Loop over the indices of the string
    L = len(string1)
    for i in range(L):
        # Add 1 to the distance if these two characters are not equal
        if string1[i] != string2[i]:
            distance += 1
    # Return the final count of differences
    return distance

output = []
for word in words:
    if word.upper() in dic:
        output.append(word)
    else:
        for i in dic:
            if len(i) == len(word):
                distance = hamming_distance(i.upper(), word.upper())
                if distance == 1:
                    # Mantén el formato original de la palabra en el mensaje de entrada
                    if word.islower():
                        output.append(i.lower())
                    else:
                        output.append(i)
                    break
                else:
                    continue
print(" ".join(output))

