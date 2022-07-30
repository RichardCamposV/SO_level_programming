
#include <stdio.h>
#include <stdlib.h>

struct Point{
    double x;
    double y;
};

struct Node{
    int value;
    struct Node *next;
};

int main(){
    // Linked list
    struct Node *head = malloc(sizeof(struct Node));
    head->value = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->value = 2;

    printf("Direction first node: %p\n", head);
    printf("Value first node: %i\n", head->value);

    printf("Direction second node: %p\n", head->next);
    printf("Value second node: %i\n", head->next->value);
    // Stack method
    /*
    struct Point point = {0.5, 5.9};
    printf("x: %f, y: %f\n", point.x, point.y);
    */
    // Heap method
    struct Point *point = malloc(sizeof(struct Point));
    point->x = 6.4;
    point->y = 7.9;
    printf("x: %f, y: %f\n", point->x, point->y);    
    free(point);

}
