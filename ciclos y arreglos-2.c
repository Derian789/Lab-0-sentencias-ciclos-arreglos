#include <stdio.h>

int main() {
    int num_personas;
    int bajo_peso_count = 0, peso_normal_count = 0, sobrepeso_count = 0, obesidad_count = 0;
    float peso, altura, bmi;
    
    // Solicitar el número de personas
    printf("Ingrese el número de personas: ");
    scanf("%d", &num_personas);

    // Recopilar datos para cada persona
    for (int i = 0; i < num_personas; i++) {
        printf("\nPersona %d:\n", i + 1);
        printf("Ingrese su peso en kilogramos: ");
        scanf("%f", &peso);
        printf("Ingrese su altura en metros: ");
        scanf("%f", &altura);

        // Calcular el BMI sin funciones
        bmi = peso / (altura * altura);

        // Clasificar según el BMI sin funciones
        if (bmi < 18.5) {
            printf("Su BMI es: %.2f. Usted está en la categoría de bajo peso.\n", bmi);
            bajo_peso_count++;
        } else if (bmi >= 18.5 && bmi < 24.9) {
            printf("Su BMI es: %.2f. Usted está en la categoría de peso normal.\n", bmi);
            peso_normal_count++;
        } else if (bmi >= 25.0 && bmi < 29.9) {
            printf("Su BMI es: %.2f. Usted está en la categoría de sobrepeso.\n", bmi);
            sobrepeso_count++;
        } else {
            printf("Su BMI es: %.2f. Usted está en la categoría de obesidad.\n", bmi);
            obesidad_count++;
        }
    }

    // Calcular los porcentajes
    float bajo_peso_pct = (float)bajo_peso_count / num_personas * 100;
    float peso_normal_pct = (float)peso_normal_count / num_personas * 100;
    float sobrepeso_pct = (float)sobrepeso_count / num_personas * 100;
    float obesidad_pct = (float)obesidad_count / num_personas * 100;

    // Imprimir los porcentajes
    printf("\nPorcentajes de categorías:\n");
    printf("Bajo peso: %.2f%%\n", bajo_peso_pct);
    printf("Peso normal: %.2f%%\n", peso_normal_pct);
    printf("Sobrepeso: %.2f%%\n", sobrepeso_pct);
    printf("Obesidad: %.2f%%\n", obesidad_pct);

    return 0;
}
