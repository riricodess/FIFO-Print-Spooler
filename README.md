# FIFO-Page-Replacement

## Aim
To implement the FIFO (First In First Out) algorithm for print spooler queue management, where the oldest job is evicted when the queue is full.

## Real-World Use Case
MARSS models a print spooler queue that stores incoming jobs in a fixed-size buffer. When the queue reaches capacity and a new job arrives, the oldest job is removed to make room for the new one.

## Algorithm
1. Create a queue with a capacity of 3 jobs.
2. Process each incoming job.
3. If the queue is full, evict the oldest job at the front of the queue.
4. Add the new job to the rear of the queue.
5. Repeat until all jobs have been processed.

## Technologies Used
- **Programming Language:** C
- **Concepts:** FIFO, queue management, operating systems, resource management

## Files in This Repository
- `FIFO.c` — C implementation of FIFO queue management.
- `fifo_output.txt` — Terminal output for the program.

## How to Compile and Run

```bash
gcc FIFO.c -o FIFO
./FIFO
```

## Expected Output

```text
marss@mariah:~/MARSS-FIFO-Page-Replacement$ gcc FIFO.c -o FIFO
marss@mariah:~/MARSS-FIFO-Page-Replacement$ ./FIFO
Queued Job 101
Queued Job 102
Queued Job 103
Evict job 101 (oldest)
Queued Job 104
Evict job 102 (oldest)
Queued Job 105
marss@mariah:~/MARSS-FIFO-Page-Replacement$
```

## Conclusion
The FIFO algorithm manages a fixed-size queue by removing the oldest job when the queue is full, demonstrating the First In First Out principle in print spooler queue management.
