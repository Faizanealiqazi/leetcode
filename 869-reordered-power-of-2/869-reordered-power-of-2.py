class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        if n == 1 or n == 2:
            return True
        if n == 0 or (math.ceil(math.log10(n)/math.log10(10)) == math.floor(math.log10(n)/math.log10(10))):
            return False
        
        num1 = [''.join(i) for i in itertools.permutations(str(n))]
        
        for num in num1:
            num = int(num) 
            if num%2 == 0 and math.ceil(math.log10(num)/math.log10(2)) == math.floor(math.log10(num)/math.log10(2)):
                return True
        return False