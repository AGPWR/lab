public class Test {
    public static void main(String[] args){
        try{
            LiczbyPierwsze Lp = new LiczbyPierwsze(Integer.parseInt(args[0]));

            for (int i=1; i<args.length; i++){
                try {
                    int n = Integer.parseInt(args[i]);
                    try {
                        if(Lp.liczba(n) == 0)
                            System.out.println(n + " - liczba spoza zakresu");
                        else
                            System.out.println(n + " - " + Lp.liczba(n));
                    } catch(ArrayIndexOutOfBoundsException ex){
                        System.out.println(n + " - liczba spoza zakresu");
                    }

                } catch(NumberFormatException ex){
                    System.out.println(args[i] + " - nieprawidlowa dana");
                }
            }
        }
        catch(NumberFormatException | ArrayIndexOutOfBoundsException | NegativeArraySizeException ex){
            System.out.println(args[0] + " - Nieprawidlowy zakres");
        }
    }
}
