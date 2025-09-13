t = int(input())
for _ in range(t):
  n, s = input().split()
  n = int(n)
  l1 = list(s)
  l1.pop(n - 1)
  print(*l1, sep="")