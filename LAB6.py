def fact(n):
    n=int(n)
    fact1=1
    for i in range(1,n+1):
        fact1 *=i
    return fact1

print('Введіть число n')
n=int(input())
print('Введіть число x')
x=float(input())
print('Введіть число epsilon')
eps=float(input())
k=1
d1=float(pow(-1,k)*pow(fact(k)*fact(n+k),-1))*(pow(0.5*x,(2*k+n)))
d=float(pow(-1,k-1)*pow(fact(k-1)*fact(n+(k-1)),-1))*(pow(0.5*x,(2*(k-1)+n)))
s=float(d)
z=float(d1-d)
while(abs(z)>eps):
        d1=float(pow(-1,k)*pow(fact(k)*fact(n+k),-1))*(pow(0.5*x,(2*k+n)))
        d=float(pow(-1,k-1)*pow(fact(k-1)*fact(n+(k-1)),-1))*(pow(0.5*x,(2*(k-1)+n)))
        s=s+d1
        k=k+1
        z=d1-d
print(s)
