public class LiczbyPierwsze {
    //pole
    private final int[] tablica;

    //konstruktor
    LiczbyPierwsze(int n){
        this.tablica = new int[n+1];

        boolean[] czyPierwsza = new boolean[n+1];
        for (int i=2; i<n+1; i++) {
            czyPierwsza[i] = true;
        }
        for (int p = 0; p < Math.sqrt(n+1); p++) {
            if(czyPierwsza[p]){
                for (int j=p; j*p<n+1; j++) {
                    czyPierwsza[j*p] = false;
                }
            }
        }
        int k = 0;
        for (int i=2; i<=n; i++) {
            if (czyPierwsza[i]){
                this.tablica[k] = i;
                k++;
            }
        }

    }
    //metoda
    public int liczba(int m){
        return this.tablica[m];
    }
}
