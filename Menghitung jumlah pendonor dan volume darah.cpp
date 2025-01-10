#include <iostream>
#include <cstdio>

int main() {
    int N, M;
    printf ("Masukkan Kode DDS : ");
    scanf("%d", &N);
    printf ("Masukkan Kode Desa: ");
    scanf("%d", &M);
    int jumlahpendonor[M][4] = {0};
    int totalvolumedarah[M][4] = {0};
    for (int i = 0; i < N; i++) {
        int kodedesa, golongandarah, volumedarah;
        scanf("%d %d %d", &kodedesa, &golongandarah, &volumedarah);
        jumlahpendonor[kodedesa - 1][golongandarah - 1]++;
        totalvolumedarah[kodedesa - 1][golongandarah - 1] += volumedarah;
    }printf ("\n");
    for (int i = 0; i < M; i++) {
        printf("Desa %d:\n", i + 1);
        printf(" A    : %d : %d\n", jumlahpendonor[i][0], totalvolumedarah[i][0]);
        printf(" B    : %d : %d\n", jumlahpendonor[i][1], totalvolumedarah[i][1]);
        printf(" AB   : %d : %d\n", jumlahpendonor[i][2], totalvolumedarah[i][2]);
        printf(" O    : %d : %d\n", jumlahpendonor[i][3], totalvolumedarah[i][3]);
    }
    return 0;
}
