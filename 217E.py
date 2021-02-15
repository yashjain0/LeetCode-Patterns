A=input()
n=len(A)
B=list()
i=0
while(i<n):
    if i%2!=0:
        B.append(int(A[i]))
    i=i+1
B.sort()
for i in range(len(B)-1):
    if B[i]==B[i+1]:
        print('true')
        break
    elif i==len(B)-1:
        print('false')