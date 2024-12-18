public class Move {
    private int startX;
    private int endX;
    private int startY;
    private int endY;
    private Piece movedPiece;
    private Piece killedPiece;

    /**
     * Ham khoi tao.
     */
    public Move(int startX1, int endX1, int startY1, int endY1, Piece movedPiece1) {
        this.startX = startX1;
        this.endX = endX1;
        this.startY = startY1;
        this.endY = endY1;
        this.movedPiece = movedPiece1;
    }

    /**
     * Ham khoi tao2.
     */
    public Move(int startX1, int endX1, int startY1, int endY1, 
                    Piece movedPiece1, Piece killedPiece1) {
        this.startX = startX1;
        this.endX = endX1;
        this.startY = startY1;
        this.endY = endY1;
        this.movedPiece = movedPiece1;
        this.killedPiece = killedPiece1;
    }

    /**
     * Di chuyen.
     */
    public String toString() {
        return movedPiece.getColor()
                + "-" + movedPiece.getSymbol()
                + (char) ('a' + endX - 1) + endY;
    }

    public int getStartX() {
        return startX;
    }

    public void setStartX(int startX1) {
        this.startX = startX1;
    }

    public int getEndX() {
        return endX;
    }

    public void setEndX(int endX1) {
        this.endX = endX1;
    }

    public int getStartY() {
        return startY;
    }

    public void setStartY(int startY1) {
        this.startY = startY1;
    }

    public int getEndY() {
        return endY;
    }

    public void setEndY(int endY1) {
        this.endY = endY1;
    }

    public Piece getMovedPiece() {
        return movedPiece;
    }

    public void setMovedPiece(Piece movedPiece1) {
        this.movedPiece = movedPiece1;
    }

    public Piece getKilledPiece() {
        return killedPiece;
    }

    public void setKilledPiece(Piece killedPiece1) {
        this.killedPiece = killedPiece1;
    }
}