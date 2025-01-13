# DESIGN ANALYSIS AND ALGORITHMS -  HOLIDAY ASSIGNMENT

## CASE-STUDY 
**Scenario** : 

An e-commerce platform is implementing a feature where products need to be sorted by various attributes (e.g., price, rating, and name). The product list contains millions of items, and the sorting operation needs to be efficient and scalable.

**1. What are the time and space complexities of the commonly used sorting algorithms (Quick Sort, Merge Sort)?**

**Quick Sort**
* Time Complexity:
    * Best Case : *O(n log n)*
    * Average Case :  *O(n log n)*
    * Worst Case : *O(n^2)* (when the pivot selection is poor, e.g., always choosing the smallest or largest element in a      sorted or nearly sorted list)

* Space Complexity: *O(log n)* (in-place, for recursive calls in the call stack)

**Merge Sort**:
* Time Complexity :
     * Best Case : *O(nlogn)*
     * Average Case : *O(nlogn)*
     * Worst Case : *O(nlogn)*

* Space Complexity:
     * *O(n)* (for the auxiliary array used during merging)

**2. Impact of Data Characteristics on the Choice of Sorting Algorithm**

**Range of Prices**: 
* If the range of prices is small and the data is numeric, algorithms like Counting Sort or Bucket Sort (non-comparison-      based sorting) might be more efficient, achieving 𝑂(𝑛) time complexity.
* For large ranges or floating-point numbers, general-purpose algorithms like Merge Sort or Quick Sort are better suited.

**Product Name Lengths**: 
* Sorting product names involves comparing strings character by character. If the average length of product names is small,   Quick Sort or Merge Sort will work efficiently.
* If the lengths vary significantly, Radix Sort (which sorts strings character by character from the least significant to     most significant) can be effective if combined with a stable sorting algorithm like Counting Sort.

## Scenarios and Recommendations
Large Data Size (Millions of Items):

Quick Sort: Ideal for in-memory operations due to its in-place nature and low space overhead. However, care must be taken to choose a good pivot strategy (e.g., median-of-three) to avoid worst-case performance.
Merge Sort: Guarantees O(nlogn) performance, but its O(n) space requirement might not be ideal for large datasets.
Stability Requirement:
If the sorting algorithm must maintain the relative order of equal elements (e.g., two products with the same price), Merge Sort or other stable sorting algorithms (e.g., Timsort) should be used.

Distributed Sorting (Scalability):
For scalable systems, distributed sorting algorithms like MapReduce-based sorting (e.g., Hadoop or Spark) are preferable. These systems often implement Merge Sort under the hood for efficient parallel processing.
Cache Efficiency:

Quick Sort often performs better in practice due to good cache locality compared to Merge Sort, which requires additional memory allocations.
Special Cases:
If the data is nearly sorted, Insertion Sort ( O(n) for nearly sorted data) or Timsort (used in Python and Java, which is a hybrid of Merge Sort and Insertion Sort) may be more efficient.

![image](https://github.com/user-attachments/assets/b9c41222-0c80-419b-8f03-a0ce8295dece)



