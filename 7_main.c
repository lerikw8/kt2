int main(){
  float temps[7] = {12.5, 14.0, 9.8, 11.2, 15.3, 13.7, 10.1};
  int n = 7;

    int imax = 0;
    for (int i = 1; i < n; i++) {
        if (temps[i] > temps[imax]) {
            imax = i;
        }
    }
printf("Самый тёплый день: %d (%.1f°C)\n", imax + 1, temps[imax]);

    return 0;
}
