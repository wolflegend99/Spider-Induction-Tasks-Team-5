a=[]
b=[]
product =1
magic_num=-1

#divisor d, remainder r,  pow p, number n, repeting number m
def binary(p):
    i=0
    while(p/2>0):
        if(p%2==1):
            a.append(i)
        i+=1
        p=p/2
    if(p%2==1):
        a.append(i)

def find_trend(n, d):
    k=1
    b.append(n%d)
    for i in range(2,d+2):
        k=pow(n,i)%d
        if(k==n%d):
            magic_num=i
            return i
        else:
            b.append(k)

def main():
    n= raw_input("Enter value of n")
    n= int(n)
    p= raw_input("Enter the value of p")
    p= int(p)
    d= raw_input("Enter the value of d")
    d= int(d)
    product =1
    binary(p)
    magic_num=find_trend(n,d)-1
    for i in range(len(a)):    
        product*= b[(pow(2,a[i])%magic_num)-1]
        product%=d
    print product
    print (product==pow(n,p)%d)

if __name__=="__main__":
    main()

    
