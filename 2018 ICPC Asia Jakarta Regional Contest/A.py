import sys
input=sys.stdin.readline

bi_str=list(str(input()))
bi_str.pop()
num=int(len(bi_str))
one=0
for i in bi_str:
    if i=="1":
        one+=1
    else:
        pass
if (one>(num-one)):
    for j in range(num):
       bi_str[j]=0
elif(one==(num-one)):
    if (bi_str[0]=="1"):
        bi_str[0]=0
        for k in range(1,num):
            bi_str[k]=1
    else:
        bi_str[0]=1
        for h in range(1,num):
            bi_str[h]=0
else:
    for l in range(num):
       bi_str[l]=1
for o in range(num):
    print(bi_str[o],end="")


