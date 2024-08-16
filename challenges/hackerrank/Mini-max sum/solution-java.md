# Mini-Max Sum
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.


```
public static void miniMaxSum(List<Integer> arr) {
        Long mininumSum = 0L;
        Long maximumSum = 0L;
        for (int i = 0; i < arr.size(); i++) {
            Long sum = 0L;
            for (int u = 0; u < arr.size(); u++) {
                if (u != i) {
                    sum += arr.get(u);
                }
            }
            
            if (i == 0) {
                mininumSum = sum;
                maximumSum = sum;
            } else if (sum > maximumSum) {
                maximumSum = sum;
            } else if (sum < mininumSum){
                mininumSum = sum;
            }
        }
            System.out.print(mininumSum + " ");
            System.out.print(maximumSum);

}
```
