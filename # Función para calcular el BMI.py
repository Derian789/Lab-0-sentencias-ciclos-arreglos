# Función para calcular el BMI
def calcular_bmi(peso, altura):
    return peso / (altura ** 2)

# Función para clasificar el BMI
def clasificar_bmi(bmi):
    if bmi < 18.5:
        print("Usted está en la categoría de bajo peso.")
    elif 18.5 <= bmi < 24.9:
        print("Usted está en la categoría de peso normal.")
    elif 25.0 <= bmi < 29.9:
        print("Usted está en la categoría de sobrepeso.")
    else:
        print("Usted está en la categoría de obesidad.")

# Entrada de datos
peso = float(input("Ingrese su peso en kilogramos: "))
altura = float(input("Ingrese su altura en metros: "))

# Calcular el BMI
bmi = calcular_bmi(peso, altura)

# Mostrar el BMI
print(f"Su BMI es: {bmi:.2f}")

# Clasificar el BMI
clasificar_bmi(bmi)
