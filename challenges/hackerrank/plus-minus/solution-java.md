# Plus Minus
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.


```
public static void plusMinus(List<Integer> arr) {
        float positiveNumbersAmount = 0;
        float negativeNumbersAmount = 0;
        float zerosAmount = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) > 0) {
                positiveNumbersAmount++;
            } else if (arr.get(i) == 0) {
                zerosAmount++;
            } else {
                negativeNumbersAmount++;
            }
        }
        
        System.out.printf("%.6f\n", positiveNumbersAmount / arr.size());
        System.out.printf("%.6f\n", negativeNumbersAmount / arr.size());
        System.out.printf("%.6f\n", zerosAmount / arr.size());

    }
```