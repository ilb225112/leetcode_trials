bool squareIsWhite(char* coordinates) {
    return ((coordinates[0]&1) != (coordinates[1]&1));
}