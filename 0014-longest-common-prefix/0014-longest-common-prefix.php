class Solution {

    /**
     * @param String[] $strs
     * @return String
     */
function longestCommonPrefix($strs) {
    if (empty($strs)) return "";

    $firstWord = $strs[0];
    $firstWordLen = strlen($firstWord);

    for ($i = 0; $i < $firstWordLen; $i++) {
        $char = $firstWord[$i];

        for ($j = 1; $j < count($strs); $j++) {
            if ($i == strlen($strs[$j]) || $strs[$j][$i] !== $char) {
                return substr($firstWord, 0, $i);
            }
        }
    }

    return $firstWord;
}
    }