class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        lista = sorted(nums)
        for i in range(len(lista) - 1):
            if lista[i] == lista[i + 1]:
                return True
        return False