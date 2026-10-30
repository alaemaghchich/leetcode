/**
 * @param {string} s
 * @return {number}
 */
function romanToInt(s) {
    const romanMap = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    };

    let total = 0;
    let prevValue = 0;

    // Process each character from right to left
    for (let i = s.length - 1; i >= 0; i--) {
        const value = romanMap[s[i]];
        if (value < prevValue) {
            total -= value; // subtract if smaller numeral comes before larger
        } else {
            total += value; // otherwise, add
        }
        prevValue = value;
    }

    return total;
}

// Examples
console.log(romanToInt("III"));      // Output: 3
console.log(romanToInt("LVIII"));    // Output: 58
console.log(romanToInt("MCMXCIV"));  // Output: 1994
