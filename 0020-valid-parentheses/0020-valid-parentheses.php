class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function isValid($s) {
    $stack = [];

    $map = [')' => '(', '}' => '{',']' => '['];

    for ($i = 0; $i < strlen($s); $i++) {
        $char = $s[$i];

        if ($char === '(' || $char === '{' || $char === '[') {
            array_push($stack, $char);
        } 
        else {
            if (empty($stack)) return false;

            $top = array_pop($stack);

            if ($top !== $map[$char]) {
                return false;
            }
        }
    }
    return empty($stack);
}
    }
