def sumar(a, b):
    return a + b

def es_par(numero):
    if numero % 2 == 0:
        return True
    else:
        return False
    
resultado_suma = sumar(1, 3)
print("El resultado de la suma es: ", resultado_suma)

numero = 2
if es_par(numero):
    print(numero, "es par")
else:
    print(numero, "es impar")
    
