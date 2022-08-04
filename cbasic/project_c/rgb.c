
#include <stdio.h>
#include <stdlib.h>

struct RGB {
    int r;
    int g;
    int b;
};

void rgb_set(struct RGB *rgb, int r, int g, int b) {
    if (r + g + b <= 255 * 3 && (r >= 0 && g >= 0 && b >= 0)) {
        rgb->r = r;
        rgb->g = g;
        rgb->b = b;
    }
}

void rgb_invert(struct RGB *rgb){
    rgb_set(rgb, 255 - rgb->r, 255 - rgb->g, 255 - rgb->b);
}

char *rgb_str(struct RGB *rgb) {
    char *str = malloc(sizeof(char) * 64);
    sprintf(
        str, "RGB: (%i, %i, %i)\nHEX: 0x%02x%02x%02x\n",
        rgb->r, rgb->g, rgb->b, 
        rgb->r, rgb->g, rgb->b 
    );
    return str;
}

int main(int argc, char **argv){
    // if (argc != 2) {
    //     printf("Uso: rgb fichero\n");
    //     exit(-1);
    // }

    struct RGB *rgb = malloc(sizeof(struct RGB));
    rgb->r = 0;
    rgb->g = 0;
    rgb->b = 0;
    printf("%s\n", rgb_str(rgb));
    rgb_invert(rgb);
    printf("%s\n", rgb_str(rgb));
    free(rgb);
}
