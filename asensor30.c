#include <stdio.h>

void usarElevador() {

    int seleccion, pisollama, pisonume, pisollega, i;
    int pisoactual = 0;
    int pisosube = 0;

    do {
        printf("Seleccione la opcion que desea:\n1. Llamar ascensor\n2. Seleccionar piso\n3. Mostrar piso actual\n4. Salir\n");
        scanf("%d", &seleccion);
        if ((seleccion < 1) || (seleccion > 4)) {
            printf("Elija una opcion valida\n");
        }
    } while ((seleccion < 1) || (seleccion > 4));

    switch (seleccion) {
        case 1:
            printf("Ingrese el piso al cual desea llamar el ascensor\n");
            scanf("%d", &pisollama);
            do {
                printf("El elevador esta en el piso: ");
                printf("%d\n", pisoactual);
                pisoactual += 1;
            } while (pisoactual != pisollama);

            if (pisollama == pisoactual) {
                printf("El elevador ya esta en su piso\n");
            }
            break;
        case 2:
            printf("Ingrese el piso al cual desea llegar \n");
            scanf("%d", &pisollega);

            for (i = 0; i <= pisollega; i++) {
                printf("El elevador esta en el piso: ");
                printf("%d\n", pisosube);
                pisosube += 1;
            }

            if (pisosube == pisollega) {
                printf("El elevador llego al piso solicitado\n");
            }
            break;
        case 3:
            printf("Seleccione el numero del piso en el que se encuentra \n");
            scanf("%d", &pisonume);

            switch (pisonume) {
                case 0:
                    printf("Usted se encuentra en la Planta Baja\n");
                    break;
                case 1:
                    printf("Usted se encuentra en el Primer Piso\n");
                    break;
                case 2:
                    printf("Usted se encuentra en el Segundo Piso\n");
                    break;
                case 3:
                    printf("Usted se encuentra en el Tercer Piso\n");
                    break;
                case 4:
                    printf("Usted se encuentra en el Cuarto Piso\n");
                    break;
                case 5:
                    printf("Usted se encuentra en el Quinto Piso\n");
                    break;
                case 6:
                    printf("Usted se encuentra en el Sexto Piso\n");
                    break;
                case 7:
                    printf("Usted se encuentra en el Septimo Piso\n");
                    break;
                case 8:
                    printf("Usted se encuentra en el Octavo Piso\n");
                    break;
                case 9:
                    printf("Usted se encuentra en el Noveno Piso\n");
                    break;
                case 10:
                    printf("Usted se encuentra en el Decimo Piso\n");
                    break;
            }
            break;
        case 4:
            printf("Gracias por usar el elevador <3\n");
            break;
    }
}
