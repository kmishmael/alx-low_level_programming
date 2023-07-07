#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int res;

    ht = hash_table_create(1024);

    res = hash_table_set(ht, "betty", "cool");
    printf("return value is: %d\n", res);
    res = hash_table_set(ht, "hetairas", "mentioner");
    printf("return value is: %d\n", res);

    res = hash_table_set(ht, "heliotropes", "neurospora");
    printf("return value is: %d\n", res);
    
    res = hash_table_set(ht, "depravement", "serafins");
    printf("return value is: %d\n", res);
    
    res = hash_table_set(ht, "stylist", "subgenera");
    printf("return value is: %d\n", res);
    
    res = hash_table_set(ht, "joyful", "synaphea");
    printf("return value is: %d\n", res);
    
    res = hash_table_set(ht, "redescribed", "urites");
    printf("return value is: %d\n", res);
    
    res = hash_table_set(ht, "dram", "vivency");
    printf("return value is: %d\n", res);
    
    res = hash_table_set(ht, "betty", "cool");
    printf("return value is: %d\n", res);
    
    return (EXIT_SUCCESS);
}
