# DESIGN ANALYSIS AND ALGORITHMS -  HOLIDAY ASSIGNMENT

## CASE-STUDY 
**Scenario** : 

An e-commerce platform is implementing a feature where products need to be sorted by various attributes (e.g., price, rating, and name). The product list contains millions of items, and the sorting operation needs to be efficient and scalable.

1. What are the time and space complexities of the commonly used sorting algorithms (Quick Sort, Merge Sort)?

**Quick Sort**
* Time Complexity:
    * Best Case : *O(n log n)*
    * Average Case :  *O(n log n)*
    * Worst Case : *O(n^2)* (when the pivot selection is poor, e.g., always choosing the smallest or largest element in a      sorted or nearly sorted list)

* Space Complexity: *O(log n)* (in-place, for recursive calls in the call stack)


