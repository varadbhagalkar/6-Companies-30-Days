class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        output = []

        def dfs(lst, curr_num, sum):
            if len(lst) == k:
                if sum == n:
                    output.append(lst)
                return
            for i in range(curr_num, 10):
                dfs(lst+[i], i+1, sum+i)

        dfs([], 1, 0)

        return output
