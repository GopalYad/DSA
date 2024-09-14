what is pointer ?
a variables that stores memory address of another varaiable are called pointer

to access variable address we use - &variable

and make sure you need to make pointer type variable.

to do this we use int* (datatype*) to assign pointer to integer.

that means we create a pointer variable that point to storing address varibale.

e.g :int a =5
 int* ptr = &a

 make sure that pointer datatype and storing datatype should be same.
 e.g :
 int a =5 
 int * ptr = &a

  bool b = false
  bool* ptr = &b


Dereference operator ->
when you access pointer like  - *ptr ->means value at stored address in ptr

difference between reference variable and pointer variable


the size of pointer doesn't depend on datatype 
but it can be depeend upon x-bit systems.

not to do while declearing pointer like generally you do it give any random error or segment
we used to make sure that it has to be null pointer