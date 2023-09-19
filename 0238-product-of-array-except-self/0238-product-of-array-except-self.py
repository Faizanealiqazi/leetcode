class Solution:
    def productExceptSelf(self, list1: List[int]) -> List[int]:
        total = 1;
        hasZero = 0;
        for i in list1:
            if i != 0:
                total = total * i
            else:
                hasZero = hasZero + 1
        lenth = len(list1)
        for i in range(lenth):
            if (hasZero > 1) or (list1[i] != 0 and hasZero == 1):
                list1[i] = 0
            elif list1[i] == 0 and hasZero == 1:
                list1[i] = total
            else:
                list1[i] = total // list1[i]
            
        return list1