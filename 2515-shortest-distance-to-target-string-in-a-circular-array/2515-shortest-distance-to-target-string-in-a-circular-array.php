class Solution {

    /**
     * @param String[] $words
     * @param String $target
     * @param Integer $startIndex
     * @return Integer
     */
    function closestTarget($words, $target, $startIndex) { 
        $n = count($words);
        $minDistance = -1;

        for ($i = 0; $i < $n; $i++) {
            if ($words[$i] === $target) {
                $diff = abs($i - $startIndex);
                
                $circularDiff = $n - $diff;
                
                $currentStep = min($diff, $circularDiff);
                
                if ($minDistance === -1 || $currentStep < $minDistance) {
                    $minDistance = $currentStep;
                }
            }
        }
        return $minDistance;
    }
}