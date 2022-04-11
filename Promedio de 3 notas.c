/*
@Author: Sebastian Sanchez Bentolila
https://github.com/Sebastian-Sanchez-Bentolila

Program that calculates the average of the 3 student grades
*/


//Modules
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


main ()
{
    //Variables
    float a, b, c, promedio;

    //Title
    printf( "Calcula promedio de 3 notas\n");

    //Asking for data
    printf( "Escriba la nota 1: ", a),
    scanf( "%f", &a );

    printf( "Escriba la nota 2: ", b),
    scanf( "%f", &b);

    printf( "Escriba la nota 3: ", c),
    scanf( "%f", &c );


    //Average
    promedio =  (a + b + c) / 3;
    printf( "El promedio de las notas es: (%f + %f + %f) / 3 = %f\n", a, b, c, promedio);


    if(promedio>=7)
    {
        printf( "Excelente, aprobaste\n");
    }

    else{
        printf( "Tenès desaprobado, a estudiar mas. Se puede\n");
    }


    system("pause");
    return 0;
}
