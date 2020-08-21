#Basico
i = 0
for valor in range(0,151): 
    print(i)
    i+=1
k = 0

#Multiplo de 5
for valor in range(0,1001):
    if k%5 == 0:
        print(k)
    k+=1

#Contar
k = 1
isFive = False
isTen = False
for valor in range(1,101): 
    if k%5 == 0:
        isFive = True
    if k%10 == 0:
        isTen = True
    if isTen and isFive:
        print("Hola mundo")
    elif isFive:
        print("Hola")
    else:
        print(k)
    k+=1
    isFive = False
    isTen = False

#Enteros Impares
k = 0
sumaImpares = 0
for valor in range(0,500001):
    if k%2 != 0:
        sumaImpares+=k
    k+=1
print("Suma total impares: ")
print(sumaImpares)

#Cuenta regresiva por cuatro
for valor in range(2018,1,-4):
    print(valor)

#Contador flexible
lowNum = 3
highNum = 7
mult = 5
k = 0
for valor in range(0,100):
 
    if valor%mult:
        print (lowNum," " ,highNum," ",mult)
    lowNum+=1
    highNum+=1
    mult+=1