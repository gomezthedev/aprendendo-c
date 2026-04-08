#include <stdio.h>

int main() {
    int temp, chovendo;

    printf("Digite a temperatura atual:\n");
    scanf("%d", &temp);
    printf("Esta chovendo? (1 - sim / 0 - nao):\n");
    scanf("%d", &chovendo);

    if (temp <10) {
        printf("Muito frio! Fique em casa.\n");
    }
else if ((temp >= 10 && temp <= 30) && !chovendo) {
    printf("Clima agradavel para sair!\n");
}
else if (temp > 30 || chovendo) {
    printf("Clima perigoso ou desconfortavel.\n");
}

return 0;

}