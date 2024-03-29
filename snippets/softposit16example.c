#include "softposit.h"

int main (int argc, char *argv[]){

    posit16_t pA, pB, pZ;
    pA = castP16(0x0FF2);
    pB = castP16(0x2123);

    pZ = p16_mul(pA, pB);

    //To check answer by converting it to double
    double dZ = convertP16ToDouble(pZ);
    printf("dZ: %.15f\n", dZ);

    //To print result in binary
    uint16_t uiZ = castUI(pZ);
    printBinary((uint64_t*)&uiZ, 16);

    return 0;
}
