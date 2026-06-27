class Point {
    private int x, y;

    public Point() {
        this.x = 0;
        this.y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }
}

public class PointDemo {
    public static void main(String[] args) {
        Point p1 = new Point();
        System.out.println("p1 initial: (" + p1.getX() + ", " + p1.getY() + ")");
        
        Point p2 = new Point(10, 20);
        System.out.println("p2 initial: (" + p2.getX() + ", " + p2.getY() + ")");
        
        p1.setX(5);
        p1.setY(15);
        System.out.println("p1 after setX/setY: (" + p1.getX() + ", " + p1.getY() + ")");
        
        p2.setXY(50, 100);
        System.out.println("p2 after setXY: (" + p2.getX() + ", " + p2.getY() + ")");
    }
}
