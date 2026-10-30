class Solution {

    /**
     * @param String[] $words
     * @return String[]
     */
    function commonChars($words) {
          $minFreq = array_fill(0, 26, PHP_INT_MAX);

    foreach ($words as $word) {
        $freq = array_fill(0, 26, 0);

        for ($i = 0; $i < strlen($word); $i++) {
            $index = ord($word[$i]) - ord('a');
            $freq[$index]++;
        }

        for ($i = 0; $i < 26; $i++) {
            $minFreq[$i] = min($minFreq[$i], $freq[$i]);
        }
    }

    $result = [];
    for ($i = 0; $i < 26; $i++) {
        while ($minFreq[$i] > 0) {
            $result[] = chr($i + ord('a'));
            $minFreq[$i]--;
        }
    }

    return $result;
    }
}