#include <iostream>
#include <cstdio>

int main() {
    int N, M;
    printf ("Masukkan Kode DDS: ");
    scanf("%d", &N);
    printf ("Masukkan Kode Desa: ");
    scanf("%d", &M);
    int jumlahpendonor[M] = {0};
    for (int i = 0; i < N; i++) {
        int kodedesa, golongandarah, volumedarah;
        scanf("%d %d %d", &kodedesa, &golongandarah, &volumedarah);
        jumlahpendonor[kodedesa - 1]++;
    }
    for (int i = 0; i < M; i++) {
        printf("Desa %d: %d Pendonor\n", i + 1, jumlahpendonor[i]);
    }
    return 0;
}
