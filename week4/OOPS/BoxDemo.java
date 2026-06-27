class Box {
    protected double length;
    protected double breadth;

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public void setDimension(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }
}

class Box3d extends Box {
    private double height;

    public Box3d(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public void setDimension(double length, double breadth, double height) {
        super.setDimension(length, breadth);
        this.height = height;
    }

    public double volume() {
        return area() * height;
    }
}

public class BoxDemo {
    public static void main(String[] args) {
        Box box = new Box(10.0, 5.0);
        System.out.println("Box Area: " + box.area());

        Box3d box3d = new Box3d(10.0, 5.0, 4.0);
        System.out.println("Box3d Area (base): " + box3d.area());
        System.out.println("Box3d Volume: " + box3d.volume());
    }
}
