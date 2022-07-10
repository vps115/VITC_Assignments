MAX = 10**5

n = int(input())
matrix=[]
s = MAX

for i in range(n):
    matrix.append(list(map(int, input().split())))
    start = min(matrix[i])
    if (start!=-1 and start<s):
        s = start

for i in j in range(n):
    e = matrix[i][j]
    if e>-1:
        cc = (e - s) % n
        cr =  (e - s) // n
        print("{}\t{}".format(e, abs((i-cr)*2) + abs(j-cc)))