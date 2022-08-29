class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        if n == 1 or n == 2:
            return True
        if n == 0 or n >=1000000000:
            return False
        
        
        li = [int(x) for x in str(n)]
        for i in permutations(li):    
            num = ''
            if i[len(i)-1] %2 == 0 and i[len(i)-1]!= 0:
                for j in i:   
                  num += str(j)
                num = int(num) 
                if num%2 == 0 and math.ceil(math.log10(num)/math.log10(2)) == math.floor(math.log10(num)/math.log10(2)):
                    return True
        return False
