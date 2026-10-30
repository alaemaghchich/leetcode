bool checkRecord(char* s) {
int absents = 0;
    int consecutive_lates = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == 'A') {
            absents++;
            if (absents >= 2) {
                return false;
            }
        }
        
        if (s[i] == 'L') {
            consecutive_lates++;
            if (consecutive_lates >= 3) {
                return false;
            }
        } else {
            consecutive_lates = 0;
        }
        i++;
    }
    return true;
}