#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basemaior, basemenor, altura, area;

    printf("Digite a base maior: \n");
    scanf("%f", &basemaior);

    printf("Digite a base menor: \n");
    scanf("%f", &basemenor);

    printf("Digite a altura: \n");
    scanf("%f", &altura);

    area = ((basemaior + basemenor) * altura) /2;

    printf ("A area e: %.2f", area);
}
