#include <stdio.h>

int main() {
    // Imprimir la palabra en pantalla
    printf("Hello world\n");

    // Guardar la palabra en un archivo de texto
    FILE *file = fopen("hello_world.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello world\n");
        fclose(file);
        printf("La palabra 'Hello world' se ha guardado en hello_world.txt\n");
    } else {
        printf("Error al abrir el archivo para escritura\n");
    }

    return 0;
}