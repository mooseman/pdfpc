
*** README -   pdfpc  *** 
*** Public Domain Functional Programming in C *** 

This small project is aimed at creating some public-domain 
C code (using a functional-programming approach) for 
manipulating data structures - mostly arrays.  

The aim is for pdfpc to eventually cover all of the following 
areas. Note that Lpred and Lsucc are different to Haskell's 
"pred" and "succ" functions.  
Those functions work on enums - these ones work on arrays (a few work on strings).   

Function  | Status | Description
--------------------- | ---------- | --------------------------------
**[All](all.c)** | -  | Returns TRUE if all elements in an array meet a specified condition. 
**[Any](any.c)** | -  | Returns TRUE if at least one element in an array meets a specified condition. 
**[Append](append.c)** |  -  | Append two arrays. 
**[Concat](concat.c)** |  -  | Concatenate two array elements. 
**[Count](count.c)** | Done | Count the number of elements in an array which meet a specified condition.  
**[Drop](drop.c)**   |  -   | Drop elements from an array.  
**[Elem](elem.c)**   | Done | Array membership ( the "in" operator ).   
**[ElemIndex](elemindex.c)**  |  -  |  The index (if any) of the first occurrence of an element. 
**[Filter](filter.c)**  | Done |  Filter an array according to some criteria.  
**[Find](find.c)**  | Done |  Find an element in an array.  
**[FindIndex](findindex.c)** | Done| Find the index of the first element in a list which satisfies a     condition.  
**[FindIndices](findindices.c)** | Done | Find the indices of ALL elements in a list which satisfy a condition. 
**[Head](head.c)** | Done | Find the head of an array.  
**[Intersperse](intersperse.c)** | Done | Intersperse characters through a string.   



This code is released to the public domain. 
"Share and enjoy....."   ;)   


