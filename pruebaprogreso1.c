#include <stdio.h>
#include <string.h>
//Nicolas Matias Galarza Sanchez
// función para validar credenciales de usuario
int login() {
char usuarios[3][50] = {"cristiano", "Haland", "messi"};
char contrasenas[3][50] = {"atletico", "astonvilla", "realmadrid"};
int intentos = 3;
while (intentos > 0) {
    char usuario[50];
    char contrasena[50];
printf("Ingrese usuario: ");
scanf("%s", usuario);
printf("Ingrese contrasena: ");
scanf("%s", contrasena);
    for (int i = 0; i < 3; i++) {
    if (strcmp(usuario, usuarios[i]) == 0 && strcmp(contrasena, contrasenas[i]) == 0) {
return 1;
    }
}
    intentos--;
printf("Usuario o contrasena fallidos. Intento #%d\n", 4 - intentos);
    }
printf("Imposible ingresar.\n");
    return 0;
}
// función para realizar operación de transporte
void transporte() {
    printf("Se ha seleccionado la opción de Operación de transporte.\n");
}
// función para mostrar el menú y manejar la selección del usuario
void menu() {
    int opcion;
    while (1) {
printf("Seleccione una opción:\n");
printf("1. Operación de transporte\n");
printf("2. Interactuar en la red social\n");
printf("3. Salir\n");
scanf("%d", &opcion);
    switch (opcion) {
        case 1:
    operacionTransporte(operacionTransporte);
        break;
        case 2:
    redSocial(redSocial);
        break;
        case 3:
printf("Saliendo del programa...\n");
        return;
    default:
        printf("Opción inválida. Seleccione una opción válida.\n");
            break;
        }
    }
}
float calcularPrecioRuta(char tipoRuta, float distancia) {
    float precioPorKm;
    if (tipoRuta == 'U') {
        precioPorKm = 0.10;
    } else if (tipoRuta == 'I') {
        precioPorKm = 0.15;
    } else {
        precioPorKm = 0.20;
    }
    return precioPorKm * distancia;
}

float calcularDescuento(float costoTotal) {
    float descuento = 0.0;
    if (costoTotal >= 500.0) {
        descuento = 0.20 * costoTotal;
    } else if (costoTotal >= 100.0) {
        descuento = 0.10 * costoTotal;
    } else if (costoTotal >= 50.0) {
        descuento = 0.05 * costoTotal;
    }
    return descuento;
}
void operacionTransporte() {
printf("\ operaciónTransporte\n");
for (int i = 1; i <= 5; i++) {
    printf("\nCliente %d\n", i);
    char tipoRuta;
    float distancia;
    printf("Ingrese el tipo de ruta (U=urbana, I=interurbana, N=internacional): ");
    scanf(" %c", &tipoRuta);
    printf("Ingrese la distancia en kilómetros: ");
    scanf("%f", &distancia);
    float precio = calcularPrecioRuta(tipoRuta, distancia);
    float descuento = calcularDescuento(precio);
    float total = precio - descuento;
    printf("Subtotal: $%.2f\n", precio);
    printf("Descuento: $%.2f\n", descuento);
    printf("Total: $%.2f\n", total);
    }
}
void redSocial() {
printf("\nInteractuar en la red social\n");
int noticias = 0, eventos = 0, preguntas = 0;
for (int i = 1; i <= 5; i++) {
printf("\nPublicación %d\n", i);
char categoria;
char mensaje[100];
printf("Ingrese el contenido del mensaje: ");
scanf(" %[^\n]", mensaje);
printf("Seleccione una categoría para el mensaje:\n");
printf("N. Noticias\n");
printf("E. Eventos\n");
printf("P. Preguntas\n");
scanf(" %c", &categoria);
switch (categoria) {
    case 'N':
        noticias++;
        break;
    case 'E':
        eventos++;
        break;
    case 'P':
        preguntas++;
        break;
    default:
        printf("Categoría inválida. Seleccione una categoría válida.\n");
        i--;
        break;
    }
}
printf("\nResumen de publicaciones:\n");
printf("Noticias: %d\n", noticias);
printf("Eventos: %d\n", eventos);
printf("Preguntas: %d\n", preguntas);
}
// función main
int main() {
int resultado = login();
if (resultado == 1) {
    printf("Bienvenido al sistema.\n");
    menu();
    operacionTransporte();
    redSocial();
} else {
    printf("No se pudo iniciar sesión.\n");
}
return 0;
}