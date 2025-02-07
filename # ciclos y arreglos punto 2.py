# Solicitar el número de personas
num_personas = int(input("Ingrese el número de personas: "))

# Variables para contar las categorías
bajo_peso_count = 0
peso_normal_count = 0
sobrepeso_count = 0
obesidad_count = 0

# Recopilar datos para cada persona
for i in range(num_personas):
    print(f"\nPersona {i+1}:")
    peso = float(input("Ingrese su peso en kilogramos: "))
    altura = float(input("Ingrese su altura en metros: "))
    
    # Calcular el BMI 
    bmi = peso / (altura ** 2)
    
    # Clasificar según el BMI sin funciones
    if bmi < 18.5:
        categoria = "bajo peso"
        bajo_peso_count += 1
    elif 18.5 <= bmi < 24.9:
        categoria = "peso normal"
        peso_normal_count += 1
    elif 25.0 <= bmi < 29.9:
        categoria = "sobrepeso"
        sobrepeso_count += 1
    else:
        categoria = "obesidad"
        obesidad_count += 1

    # Imprimir el BMI y la clasificación
    print(f"Su BMI es: {bmi:.2f}. Usted está en la categoría de {categoria}.")

# Calcular los porcentajes
bajo_peso_pct = (bajo_peso_count / num_personas) * 100
peso_normal_pct = (peso_normal_count / num_personas) * 100
sobrepeso_pct = (sobrepeso_count / num_personas) * 100
obesidad_pct = (obesidad_count / num_personas) * 100

# Imprimir los porcentajes
print("\nPorcentajes de categorías:")
print(f"Bajo peso: {bajo_peso_pct:.2f}%")
print(f"Peso normal: {peso_normal_pct:.2f}%")
print(f"Sobrepeso: {sobrepeso_pct:.2f}%")
print(f"Obesidad: {obesidad_pct:.2f}%")
