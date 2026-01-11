1function twoSum(nums: number[], target: number): number[] {
2    const map: Record<number, number> = Object.create(null);
3
4    for (let i = 0; i < nums.length; i++) {
5        const complement = target - nums[i];
6        if (map[complement] !== undefined) {
7            return [map[complement], i];
8        }
9        map[nums[i]] = i;
10    }
11
12    return [];
13}