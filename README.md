# Partition Allocation Methods
This is used to allocate memory to processes using first fit, best fit, and worst fit methods. The 
code first asks the user to input the number of blocks in the memory and the size of each block. It 
then asks the user to enter the number of processes and the size of each process. The user is then 
given a menu to choose one of the 3 methods of allocation. Based on the user's choice, the 
corresponding function will be called where memory is allocated to the processes. The output 
will be printed in the form of a table, indicating the process number, size of the process, and the 
block number if it is allocated.
+ First Fit is a memory management algorithm that finds the first available block in memory 
that is large enough to accommodate a process. This code iterates through the array of 
processes and attempts to allocate each process to the first block of memory that is large 
enough to fit it. If it finds a suitable block, it allocates the process to that block, reduces the 
available space in the block by the size of the process, and prints the allocated block to the 
console. If there is not a suitable block, the process is not allocated and "Not Allocated" is 
printed.
+ The Best Fit algorithm is a memory allocation algorithm that searches for the smallest 
block of memory that is large enough to hold the requested size of memory. The code first 
sorts the blocks of memory in ascending order according to their size. Then, it iterates 
through the processes and tries to allocate the smallest block of memory that is large 
enough to hold the requested size of memory. If it finds a block of memory that fits the 
requested size, it prints out the details and updates the remaining size of the block of 
memory. Otherwise, it prints the message "Not allocated".
+ The worst fit algorithm for memory allocation. It is a process used in memory management 
and allocation of memory blocks to processes. The algorithm works by trying to find the 
largest block of available memory for a process and then allocating that block to the 
process. It first initializes an array "temp" with -1 values. It then checks the block size array 
and the process size array and looks for the block with the largest size difference (block 
size - process size). Once it finds the block, it reduces the block size in the array and assigns 
the block number to the "temp" array.

# Snapshots

![image](https://user-images.githubusercontent.com/110801658/232817714-afdc8ac9-0a19-43ad-a4af-e737ba09d27f.png)

●	If 1 is pressed for First fit
 
 ![image](https://user-images.githubusercontent.com/110801658/232817741-a114a25a-b5e8-4b83-9e50-ea1d565cdcc0.png)


•	If 2 is pressed for Best fit
 
 ![image](https://user-images.githubusercontent.com/110801658/232817790-92cf1fc2-a8c3-460e-a804-2f95c3c75b24.png)

 
•	If 3 is pressed for Worst fit

![image](https://user-images.githubusercontent.com/110801658/232818112-fa2653cb-d662-4b0e-9ad5-f9b82682a5cf.png)
●	Program terminates if 0 is pressed.

 ![image](https://user-images.githubusercontent.com/110801658/232817848-6c4b8915-1be2-4037-86f9-21b5cc5e0dfe.png)


