package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        // a. Create an instance of Veena and call play() method
        System.out.println("--- Directly playing Veena ---");
        Veena veena = new Veena();
        veena.play();

        // b. Create an instance of Saxophone and call play() method
        System.out.println("\n--- Directly playing Saxophone ---");
        Saxophone saxophone = new Saxophone();
        saxophone.play();

        // c. Place the above instances in a variable of type Playable and then call play()
        System.out.println("\n--- Polymorphically playing via Playable interface ---");
        Playable playable1 = veena;
        Playable playable2 = saxophone;
        
        playable1.play();
        playable2.play();
    }
}
