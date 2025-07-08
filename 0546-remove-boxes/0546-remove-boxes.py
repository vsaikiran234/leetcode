class Solution: # class Solution 
  def removeBoxes(self, boxes: list[int]) -> int: # def removeboxes(self, boxes: list[int]) -> int:
    @functools.lru_cache(None) # @functools.lru_cache(None)
    def dp(i: int, j: int, k: int) -> int:
      """
      Returns the maximum score of boxes[i..j] if k boxes equal to boxes[j].
      """
      if i > j:   # if i > j:
        return 0  # return 0

      r = j # r = j 
      sameBoxes = k + 1 # sameBoxes = k + 1
      while r > 0 and boxes[r - 1] == boxes[r]:
        r -= 1   # r -= 1
        sameBoxes += 1
      res = dp(i, r - 1, 0) + sameBoxes * sameBoxes

      for p in range(i, r): # for p in range(i, r):
        if boxes[p] == boxes[r]:
          res = max(res, dp(i, p, sameBoxes) + dp(p + 1, r - 1, 0))

      return res # return res 

    return dp(0, len(boxes) - 1, 0)   # return dp(0, len(boxes) -1, 0)