import java.util.ArrayList;

public class Board {
    public static final int WIDTH = 8;
    public static final int HEIGHT = 8;
    private ArrayList<Piece> pieces;

    public Board() {
        pieces = new ArrayList<>();
    }

    public ArrayList<Piece> getPieces() {
        return pieces;
    }

    public void setPieces(ArrayList<Piece> pieces) {
        this.pieces = pieces;
    }

    public boolean validate(int x, int y) {
        return Piece.isValid(x, y);
    }

    /**
     * Them phan tu tai vi tri.
     */
    public void addPiece(Piece p) {
        boolean existPiece = getAt(p.getCoordinatesX(), p.getCoordinatesY()) != null;

        if (!existPiece) {
            pieces.add(p);
        }
    }

    /**
     * Xoa di phan tu tai vi tri.
     */
    public void removeAt(int x, int y) {
        if (Piece.isValid(x, y)) {
            pieces.remove(getAt(x, y));
        }
    }

    /**
     * Lay quan co.
     */
    public Piece getAt(int x, int y) {
        if (Piece.isValid(x, y)) {

            for (Piece piece : pieces) {
                if (piece.getCoordinatesX() == x && piece.getCoordinatesY() == y) {
                    return piece;
                }
            }
        }

        return null;
    }
}