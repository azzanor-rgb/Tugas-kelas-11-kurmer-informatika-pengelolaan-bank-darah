#include <iostream>
#include <cstdio>

int main() {
    int N, M;
    printf("Masukkan Jumlah DDS: ");
    scanf("%d", &N);
    printf("Masukkan Jumlah Desa: ");
    scanf("%d", &M);
    
    int jumlahpendonor[M][4] = {0};
    int totalvolumedarah[M][4] = {0};

    for (int i = 0; i < N; i++) {
      int kodedesa, golongandarah, volumedarah;
      scanf("%d %d %d", &kodedesa, &golongandarah, &volumedarah);

      jumlahpendonor[kodedesa - 1][golongandarah - 1]++;
      totalvolumedarah[kodedesa - 1][golongandarah - 1] += volumedarah;
    }

    int kodegolongandarah, kebutuhandarah;
    printf("Golongan Darah yang Dibutuhkan: ");
    scanf("%d", &kodegolongandarah);
    printf("Masukkan Kebutuhan Darah (ml): ");
    scanf("%d", &kebutuhandarah);
    
    int totalkebutuhandarah = 0;

    for (int i = 0; i < M; i++) {
        totalkebutuhandarah += totalvolumedarah[i][kodegolongandarah - 1];
    }

    if (totalkebutuhandarah >= kebutuhandarah) {
     printf("Desa yang akan dilaksanakan bakti golongan darah:\n");

    for (int i = 0; i < M; i++) {
     int darahdidesa = totalvolumedarah[i][kodegolongandarah - 1];
      if (darahdidesa > 0) {
      printf("Desa %d: %d ml\n", i + 1, darahdidesa);
      }
    }

    int surplus = totalkebutuhandarah - kebutuhandarah;
      printf("Kebutuhan darah dipenuhi dengan surplus %d ml\n", surplus);
    } else {
      int kekurangan = kebutuhandarah - totalkebutuhandarah;
      printf("Kebutuhan darah masih kurang %d ml\n", kekurangan);
    }

    return 0;
}
