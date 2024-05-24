class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = candies[0];
        for (int i=1; i<candies.length; i++){
            if(candies[i] > max){max = candies[i];}
        }
        System.out.println(max);
        List<Boolean> result = new ArrayList<>();
        for (int i=0; i<candies.length; i++){
            result.add(candies[i] + extraCandies >= max);
        }
        return result;
    }
}