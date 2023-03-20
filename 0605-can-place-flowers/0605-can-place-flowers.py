class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if len(flowerbed) == 1 and n == 1 and flowerbed[0] == 0:
            return True
        k = 0
        prev = 0
        for i in range(len(flowerbed)-1):
            if prev == 1:
                prev = flowerbed[i]
                continue
            if flowerbed[i] == 0 and flowerbed[i+1] == 0:
                flowerbed[i] = 1
                k += 1
            
            prev = flowerbed[i]
        
        if len(flowerbed) >= 2:
            if flowerbed[-1] == 0 and flowerbed[-2] == 0:
                k += 1

        if k >= n :
            return True
        return False