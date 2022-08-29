class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        if n == 1 or n == 2:
            return True
        if n == 0 or (math.ceil(math.log10(n)/math.log10(10)) == math.floor(math.log10(n)/math.log10(10))) or n >= 1000000000:
            return False
        li = [int(x) for x in str(n)]
        flag = True
        length = len(str(n))
        combinations = permutations(li,length)

        for i in combinations:    
            num1 = ''
            if i[len(i)-1] %2 == 0:
                for j in i:   
                  num1 += str(j)
                num = int(num1) 
                #print(num)
                if (num%2) == 0:
                    if (math.ceil(math.log10(num)/math.log10(2)) == math.floor(math.log10(num)/math.log10(2))):
                        return True
                    flag  = False
                else:
                    flag = False
        return flag
