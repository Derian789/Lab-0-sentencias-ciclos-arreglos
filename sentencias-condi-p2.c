#include <stdio.h>

int main() {
    float peso, altura, bmi;

    // Entrada de datos
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    // Cálculo del BMI
    bmi = peso / (altura * altura);

    // Mostrar el BMI
    printf("Su BMI es: %.2f\n", bmi);

    // Clasificación del BMI
    if (bmi < 18.5) {
        printf("Usted está en la categoría de bajo peso.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Usted está en la categoría de peso normal.\n");
    } else if (bmi >= 25.0 && bmi < 29.9) {
        printf("Usted está en la categoría de sobrepeso.\n");
    } else {
        printf("Usted está en la categoría de obesidad.\n");
    }

    return 0;
}
