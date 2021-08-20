import sys
input=sys.stdin.readline
 
num=[]
N=int(input())
num=list(map(int,input().split()))
for i in num:
    print(N-i+1,end='')
    print(" ",end='')
