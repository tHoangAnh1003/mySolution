import java.util.ArrayList;

public class Game {
    private Board board;
    private ArrayList<Move> moveHistory;

    /**
     * Ham khoi tao khong tham so.
     */
    public Game() {
        board = new Board();
        moveHistory = new ArrayList<>();
    }

    /**
     * Ham khoi tao.
     */
    public Game(Board board) {
        this.board = board;
        moveHistory = new ArrayList<>();
    }

    /**
     * Di chuyen quan co.
     */
    public void movePiece(Piece piece, int x, int y) {
        if (piece.canMove(board, x, y)) {
            Move move;
            Piece pieceAt = board.getAt(x, y);
            if (pieceAt == null) {
                move = new Move(
                    piece.getCoordinatesX(), x,
                    piece.getCoordinatesY(), y, piece
                );
            } else {
                move = new Move(
                    piece.getCoordinatesX(), x,
                    piece.getCoordinatesY(), y,
                    piece, pieceAt
                );
                board.removeAt(x, y);
            }

            moveHistory.add(move);
            piece.setCoordinatesX(x);
            piece.setCoordinatesY(y);
        }
    }

    public Board getBoard() {
        return board;
    }

    public void setBoard(Board board) {
        this.board = board;
    }

    public ArrayList<Move> getMoveHistory() {
        return moveHistory;
    }
}