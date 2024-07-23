def divide_numbers(numerator, denominator):
    try:
        result = numerator / denominator
    except ZeroDivisionError:
        return "Error: Pembagi tidak boleh nol."
    except TypeError:
        return "Error: Harap masukkan angka yang valid."
    except Exception as e:
        return f"Error: {str(e)}"
    else:
        return result
    finally:
        print("Operasi pembagian selesai.")

print(divide_numbers(10, 2))
print(divide_numbers(10, 0))
print(divide_numbers(10, 'a'))
