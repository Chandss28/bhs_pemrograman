#Function untuk menyapa seseorang dengan nama yang diberikan
def greet(name):
    return f"Hello, {name}!" 
print(greet("Rome")) 


# Recursive function untuk menghitung faktorial dari sebuah angka
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
hasil = factorial (5)
print(f"Hasil faktorial dari 5 adalah: {hasil}")