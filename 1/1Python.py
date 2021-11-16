sum = 0
MAX = 1000
for i in range(MAX):
    if i%3 == 0 or i% 5 == 0:
        sum = sum+i
print(sum)
