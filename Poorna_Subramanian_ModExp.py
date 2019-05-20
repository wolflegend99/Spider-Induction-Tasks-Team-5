def power(a,b,p) : 
    res = 1     
    a = a % p  
  
    while (b > 0) : 

        if ((b & 1) == 1) : 
            res = (res * a) % p 
  
      
        b = b >> 1      
        a = (a * a) % p 
          
    return res
print("Enter values of a,b,p where (a^b)%p")

a=int(input("Enter value of a: "))
b=int(input("Enter Value of b: "))
p=int(input("Enter value of p: "))
print("Power is: ", power(a,b,p))
