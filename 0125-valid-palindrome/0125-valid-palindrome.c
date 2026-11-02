bool isPalindrome(char* s) {
    int i = 0;
    int len = 0;
    
    while (s[len])
        len++;
        
    if (len < 2)
        return true;
        
    len -= 1;
    
    while (i < len) {
        while (i < len && !((s[i] >= 'a' && s[i] <= 'z') || 
                            (s[i] >= 'A' && s[i] <= 'Z') || 
                            (s[i] >= '0' && s[i] <= '9'))) {
            i++;
        }
        while (i < len && !((s[len] >= 'a' && s[len] <= 'z') || 
                            (s[len] >= 'A' && s[len] <= 'Z') || 
                            (s[len] >= '0' && s[len] <= '9'))) {
            len--;
        }
        if (i >= len) break;
        char left = s[i];
        char right = s[len];
        if (left >= 'A' && left <= 'Z') left += 32;
        if (right >= 'A' && right <= 'Z') right += 32;
        if (left != right) {
            return false;
        }
        i++;
        len--;
    }
    return true;
}