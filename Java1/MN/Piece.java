public abstract class Piece {
    private int coordinatesX;
    private int coordinatesY;
    private String color;

    /**
     * Ham khoi tao.
     */
    public Piece(int coordinatesX1, int coordinatesY1) {
        if (isValid(coordinatesX1, coordinatesY1)) {
            this.coordinatesX = coordinatesX1;
            this.coordinatesY = coordinatesY1;
        }
        this.color = "white";
    }

    /**
     * Ham khoi tao2.
     */
    public Piece(int coordinatesX1, int coordinatesY1, String color1) {
        if (isValid(coordinatesX1, coordinatesY1)) {
            this.coordinatesX = coordinatesX1;
            this.coordinatesY = coordinatesY1;
        }

        if (isValid2(color1)) {
            this.color = color1;
        } else {
            this.color = "white";
        }
    }

    public static boolean isValid(int x, int y) {
        return (x >= 1 && x <= 8) && (y >= 1 && y <= 8);
    }

    public static boolean isValid2(String color) {
        return color.equals("black") || color.equals("white");
    }

    public abstract String getSymbol();

    public abstract boolean canMove(Board board, int x, int y);

    public int getCoordinatesX() {
        return coordinatesX;
    }

    public void setCoordinatesX(int coordinatesX1) {
        this.coordinatesX = coordinatesX1;
    }

    public int getCoordinatesY() {
        return coordinatesY;
    }

    public void setCoordinatesY(int coordinatesY1) {
        this.coordinatesY = coordinatesY1;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color1) {
        this.color = color1;
    }

    /**
     * Check vi tri.
     */
    public boolean checkPosition(Piece p) {
        if (!isValid(p.getCoordinatesX(), p.getCoordinatesY())) {
            return false;
        }

        return p.getCoordinatesX() == this.coordinatesX
            && p.getCoordinatesY() == this.coordinatesY;
    }
}