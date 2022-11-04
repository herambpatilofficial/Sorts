# Bubble Sort
Bubble sort is the simplest sorting technique. 
We consider any two elements of an array at a time, and we compare those two elements one-by-one, if the elements are sorted, we proceed further, if they are not, we switch their positions, we iterate through the array, until we get the completely sorted array.
Let's take an example,
## 50 | 86 | 77 | 99 | 67 | 70 | 34 | 48 | 63 | 78

This is an completely unsorted array, now in bubble sort we initially consider only first two elements of an array, and check if they are sorted, 
In this case, there is **50 and 86**, which is sorted.

Now considering next two element, that is **86 and 77**, now these two elements are not sorted, so we switch their places, giving array which looks something like
## 50 | 77 | 86 | 99 | 67 | 70 | 34 | 48 | 63 | 78
we keep going on like this until last element arrives, and we've completed one iteration.
After one iteration, our array will look something like

## 50 | 77 | 86 | 67 | 70 | 34 | 48 | 63 | 78 | 99

Still we're not done with correctly sorting the array, 
Hence we will once again iterate through the array, and after second iteration you would get something like this
## 50 | 77 | 67 | 70 | 34 | 48 | 63 | 78 | 86 | 99
If you look closely enough, with Bubble sort, we're making largest elements reach their appropriate positions first, and then we're making the Second largest, third largest, accordingly, untill we get the sorted array.

So in the worst case scenario, we would need to iterate through the array, as much times as length of the array.

This is one more bit visually appealing example. (Credit: IITH VLabs)

![Bubble Sort Example 2](https://ds1-iiith.vlabs.ac.in/exp/bubble-sort/bubble-sort/images/oneiteration.png)




The example of Bubble Sort Code, is in this folder.