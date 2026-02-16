GROUP MEMBERS
1.	Joesam Kireru BSCCS/2025/54332.
2.	Faith Nyeresa BSCCS/2025/47451
3.	Alvin Maina BSCCS/2025/54954
4.	Lorine Kavela BSCCS/2025/49688
5.	Ruby Kwamboka BSCCS/2025/51470
6.	Meda Cherono BSCCS/2025/58376
7.	Ayub Christopher BSCCS/2025/58915
8.	Laetetia Mumbe BSCCS/2025/41891


Purpose of the Program
The purpose of this program is to demonstrate the implementation of a Stack data structure using an array in the C programming language.
A stack follows the LIFO principle (Last In, First Out), meaning the last element added is the first one to be removed.
 Why We Used a Stack
1.	It is one of the most fundamental data structures.
2.	It helps understand memory organization.
3.	It is used in real-life applications such as:
Function calls (call stack)
•	Undo/Redo operations
•	Expression evaluation
•	Syntax parsing
  Why We Used an Array
•	We used an array to implement the stack because:
•	Arrays are simple and easy to understand.
•	Memory is allocated in contiguous locations.
•	It allows fixed-size stack implementation.
•	It helps demonstrate stack overflow and underflow conditions.
 Explanation of Key Components
•	#define MAX 5
Defines the maximum size of the stack.
•	 int stack[MAX];
Declares the array that stores stack elements.
•	int top = -1;
Tracks the top position of the stack.
•	-1 means the stack is empty.
 Functions Used
 Push()
Adds an element to the top of the stack.
Checks for stack overflow (when stack is full).
•	Pop()
Removes the top element.
Checks for stack underflow (when stack is empty).
•	Display()
Shows all elements from top to bottom.
 What This Program Demonstrates
Implementation of a linear data structure.
Use of functions in C.
Condition checking (if statements).
Stack operations (Push and Pop).
LIFO behavior.
 Conclusion
This program helps us understand how stacks work internally and how data structures are implemented in C without using built-in libraries. It builds a foundation for learning more advanced data structures like linked lists, queues, and trees.
 
APPLICATION OF DATA STRUCTURES
Arrays (The Foundation)
Arrays store elements in contiguous memory locations, allowing for "random access."
•	Application: Image Processing and Buffering. Digital images are essentially 2D or 3D arrays of pixels (RGB values).
•	Why: Since the size of an image is usually known upfront, arrays provide (constant time) access to any specific pixel.
•	Specific Detail: In video streaming, "circular buffers" (a variation of arrays) are used to store incoming data packets. This ensures the player always has the next frame ready to go without reallocating memory constantly.

2. Linked Lists (The Dynamic Chain)
Unlike arrays, linked lists consist of nodes scattered in memory, connected by pointers.
•	Application: Image Galleries and Music Playlists. Specifically, the "Previous" and "Next" functionality.
•	Why: You can easily insert or delete a song/photo anywhere in the list without shifting every other element (which you’d have to do in an array).
•	Specific Detail: Doubly Linked Lists are used in browser history. Each page (node) points to the one before it and the one after it, making the "Back" and "Forward" buttons extremely efficient.


3. Stacks (LIFO - Last In, First Out)
Think of a stack of plates; you can only interact with the top one.
•	Application: The "Undo" Mechanism (Ctrl+Z) and Function Calls.
•	Why: Applications need to track states in reverse order. When you perform an action, it's "pushed" onto the stack. When you undo, the most recent action is "popped" off.

•	Specific Detail: The System Stack (or Call Stack) manages function execution in programming languages like Python or Java. When a function is called, its local variables are pushed onto the stack; when it finishes, they are popped off to return control to the previous function.

4. Queues (FIFO - First In, First Out)
The classic "first come, first served" model.
•	Application: Printer Spooling and Web Server Request Handling.
•	Why: When a server receives 1,000 requests at once, it can't process them simultaneously. A queue ensures they are handled in the exact order they arrived.
•	Specific Detail: Priority Queues are used in hospital emergency rooms or OS scheduling. Even if a "low priority" task arrived first, a "high priority" task (like a critical system update or a trauma patient) can jump to the front.

5. Hash Tables (The Speed Demon)
Hash tables map keys to values using a mathematical formula called a "hash function."
•	Application: Database Indexing and Password Verification.
•	Why: They offer average time complexity for searches. If you have a database of 1 billion users, a hash table allows you to find "User_123" almost instantly.
•	Specific Detail: Compilers use Symbol Tables (implemented as hash tables) to store information about variables and functions in your code, allowing the program to look up memory addresses at lightning speed during execution.

6. Trees (The Hierarchy)
Trees represent data with a parent-child relationship.
•	Application: File Systems (Folders/Files) and HTML DOM.
•	Why: Trees are perfect for nested relationships. Binary Search Trees (BSTs) allow for efficient searching, while B-Trees are the backbone of modern databases (like MySQL) because they minimize disk reads.
•	Specific Detail: Tries (Prefix Trees) are used in Autocomplete and Spell Checkers. Each node represents a character, allowing the system to quickly narrow down word possibilities as you type.




7. Graphs (The Network)
Graphs consist of nodes (vertices) and connections (edges). They are the most complex but most "human" data structure.
•	Application: Social Media Networks and GPS Navigation.
•	Why: Relationships aren't always hierarchical. In a social network, everyone is a node, and "friendships" are edges. In GPS, intersections are nodes and roads are edges with "weights" (distance or traffic).
•	Specific Detail: Dijkstra’s Algorithm is used on graphs to find the shortest path between two points, whether that's the fastest route to a coffee shop or the most efficient path for a data packet to travel across the internet.



APPLICATION OF DATA STRUCTURES
Arrays
Applications:
•	Image Processing: Images are essentially 2D arrays of pixels.
•	Lookup Tables: Storing fixed data like the months of the year or physical constants.
Why?
Arrays provide O(1) random access. If you know the index, you can jump to the data instantly. In an image, accessing the pixel at coordinates $(x, y)$ needs to be lightning-fast to render frames in real-time.




2. Linked Lists
Applications:
•	Music Players: Managing "Next" and "Previous" tracks in a playlist.
•	Image Viewers: Flipping through a gallery.
Why?
Unlike arrays, linked lists allow for easy insertion and deletion. If you want to add a song to the middle of a 1,000-song playlist, you don’t have to shift every other song down; you just change where two "links" point.

3. Stacks (LIFO: Last-In, First-Out)
Applications:
•	The "Undo" Button: Every text editor uses a stack to track changes.
•	Browser History: Navigating back through recently visited pages.
Why?
Stacks are perfect for reversing actions. The last thing you did is the first thing you want to undo. They provide a simple, restricted way to manage "nested" states.

4. Queues (FIFO: First-In, First-Out)
Applications:
•	Printer Spools: Managing documents waiting to be printed.
•	CPU Task Scheduling: Handling processes in the order they arrive.
Why?
Queues ensure fairness. In a shared resource environment, you want to serve the person or process that has been waiting the longest.
5. Hash Tables
Applications:
•	Database Indexing: Finding a user record by their unique ID.
•	Caching: Storing temporary web data to speed up page loads.
Why?
Hash tables offer near-constant time search. Instead of searching through a list of a million users, a "hash function" tells the computer exactly where that user's data is stored.

6. Trees
Applications:
•	File Systems: The folder/directory structure on your computer.
•	HTML DOM: How a web browser views the elements of a webpage.
•	Decision Trees: Used in machine learning for classification.
Why?
Trees represent hierarchical relationships. They allow for efficient searching (in the case of Binary Search Trees) and reflect how we naturally organize data into categories and subcategories.

7. Graphs
Applications:
•	Social Networks: Mapping "Friends" or "Followers" (Facebook/LinkedIn).
•	GPS Navigation: Finding the shortest path between two locations (Google Maps).
Why?
Graphs are the only way to model complex connections. They allow algorithms (like Dijkstra's) to calculate the most efficient route through a web of interconnected nodes.

How Data Structures and Algorithms Work within Systems

Data structures are the formats and methods of organizing data. They determine how information is stored in memory and how quickly it can be retrieved or modified.
•	Memory Management:
o	Arrays and linked lists manage sequential and dynamic memory.
o	Operating systems use linked lists to track free and allocated memory blocks.
•	File Systems:
o	Trees (like B-trees) organize directories and files hierarchically.
o	Hash tables are used for quick file lookups in indexing.
•	Networking:
o	Graphs represent connections between devices.
o	Routing algorithms rely on graph traversal to find optimal paths.
•	Databases:
o	Hash tables and B-trees are used for indexing and fast query retrieval.
o	Tries are used in search engines for autocomplete and prefix searches.
🔹 How Algorithms Work in Systems
Algorithms are step-by-step procedures that operate on data structures to solve problems efficiently.
•	Sorting Algorithms (QuickSort, MergeSort, HeapSort):
o	Used in databases and operating systems to organize records for faster searching.
•	Searching Algorithms (Binary Search, Hashing):
o	Enable fast retrieval of data in arrays, trees, and hash tables.
•	Graph Algorithms (Dijkstra’s, BFS, DFS):
o	Power GPS navigation, social network analysis, and internet routing.
•	Compression Algorithms (Huffman coding, LZW):
o	Reduce file sizes for storage and transmission.
•	Cryptographic Algorithms (RSA, AES):
o	Secure communication and data storage.
How They Work Together
Data structures and algorithms are inseparable:
•	A data structure provides the foundation (e.g., a tree).
•	An algorithm defines how to use it (e.g., tree traversal for searching).
For example:
•	In a search engine, a trie (data structure) stores words, while a prefix-search algorithm retrieves suggestions quickly.
•	In an operating system scheduler, a heap (data structure) organizes tasks by priority, while scheduling algorithms decide execution order.














 Summary Table
System Component	Data Structure	Algorithm	Why It Works
Memory Mgmt	Linked List	Allocation/Deallocation	Efficient dynamic memory tracking
File Systems	Trees, Hash Tables	Search/Insert/Delete	Hierarchical storage & fast lookup
Networking	Graphs	Dijkstra’s, BFS	Optimal routing & connectivity
Databases	B-Trees, Hash Tables	Binary Search, Indexing	Fast query retrieval
Search Engines	Tries	Prefix Search	Quick autocomplete
OS Scheduling	Heaps	Priority Scheduling	Efficient task execution
Security	Arrays, Hash Tables	Cryptographic Algorithms	Secure data handling




