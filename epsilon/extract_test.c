#include <stdio.h>

int main() {
    FILE* fp = fopen("epsilon_normalized.t", "r");
    FILE* fl = fopen("testlabel", "w");
    FILE* fd = fopen("testdata", "w");
    int l;
    for (int i = 0; i < 100000; ++i) {
        fscanf(fp, "%d", &l);
        fwrite(&l, sizeof(int), 1, fl);
        for (int j = 0; j < 2000; ++j) {
            double k;
            fscanf(fp, "%*d:%lf", &k);
            fwrite(&k, sizeof(double), 1, fd);
        }
    }
    return 0;
}
