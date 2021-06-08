#include <bits/stdc++.h>
#include <stdio.h>
#include "include/shop.h"

using namespace std;

void read_Vinyls()
{
    FILE* plik;
    plik = fopen("Vinyls.txt", "r");
    char znak;
    do
    {
        znak = fgetc(plik);
    }
    while(znak != EOF);
    fclose(plik);
}
int main()
{
    return 0;
}