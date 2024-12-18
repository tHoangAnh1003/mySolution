import java.util.Objects;

public class Rook extends Piece {
    /**
     * Ham khoi tao.
     */
    public Rook(int coordinatesX, int coordinatesY) {
        super(coordinatesX, coordinatesY);
    }

    /**
     * Ham khoi tao2.
     */
    public Rook(int coordinatesX, int coordinatesY, String color) {
        super(coordinatesX, coordinatesY, color);
    }

    @Override
    public String getSymbol() {
        return "R";
    }

    /**
     * Co the di chuyen.
     */
    @Override
    public boolean canMove(Board board, int x, int y) {
        if (!board.validate(x, y) || isValidMove(x, y)) {
            return false;
        }

        Piece viTri = board.getAt(x, y);

        if (viTri != null) {
            if (Objects.equals(viTri.getColor(), this.getColor())) {
                return false;
            }
        }

        String move = "";

        if (this.getCoordinatesY() == y) {
            move = "Horizontal";
        } else {
            move = "Vertical";
        }

        if (move.compareTo("Horizontal") == 0) {
            return moveH(board, x, y);
        } else {
            return moveV(board, x, y);
        }
    }

    /**
     * Check can move.
     */
    public boolean moveH(Board board, int x, int y) {
        int currX = this.getCoordinatesX();

        int dx = 0;
        if (currX < x) {
            dx = 1;
        } else {
            dx = -1;
        }

        currX += dx;
        while (currX != x) {
            if (board.getAt(currX, y) != null) {
                return false;
            }

            currX += dx;
        }

        return true;
    }

    /**
     * Can move2.
     */
    public boolean moveV(Board board, int x, int y) {
        int currY = this.getCoordinatesY();
        
        int dy = 0;
        if (currY < y) {
            dy = 1;
        } else {
            dy = -1;
        }

        currY += dy;
        while (currY != y) {
            if (board.getAt(x, currY) != null) {
                return false;
            }

            currY += dy;
        }

        return true;
    }

    /**
     * Check move.
     */
    public boolean isValidMove(int x, int y) {
        return (this.getCoordinatesX() != x && this.getCoordinatesY() != y)
            || (this.getCoordinatesX() == x && this.getCoordinatesY() == y);
    }
}