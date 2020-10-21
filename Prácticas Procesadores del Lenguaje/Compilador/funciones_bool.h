#ifndef BG_FB_H
#define BG_FB_H
    #include <stdlib.h>

    typedef struct celda_bool{
        int inst;
        struct celda_bool *sig;
    }celda_bool;

    typedef struct lista_bool{
        celda_bool *primero;
    }lista_bool;
    
    lista_bool* merge_lists(lista_bool *A, lista_bool *B);
    lista_bool* makelist(int nextquad);
    int insertar_bool(lista_bool* ls, int ssid);
    void recorrer_bool(lista_bool* A);

#endif
