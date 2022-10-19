n = 1184
n1= 1211
n_half = int(n/2)
n1_half = int(n1/2)
n_count = 0
n1_count = 0
for i in range(1,n_half+1):
    if(n%i == 0):
        n_count = n_count+i
for j in range(1,n1_half+1):
    if(n1%j == 0):
        n1_count = n1_count+j
print(n_count)
print(n1_count)
if(n1_count == n and n_count == n1):
    print("It an ambicable number")