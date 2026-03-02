// C++ STL (Standard Template Library) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates. It includes algorithms and data structures that allow programmers to use them without having to implement them from scratch. The STL provides a collection of template classes and functions for data structures such as vectors, lists, queues, stacks, sets, maps, and algorithms for sorting, searching, and manipulating these data structures.
// It consists of four main components:
// 1. Containers: These are data structures that store objects and data. Examples include vector, list, deque, set, map, etc.
// 2. Algorithms: These are a collection of functions that perform operations on containers, such as sorting, searching, and manipulating data. Examples include sort, find, reverse, etc.
// 3. Iterators: These are objects that point to elements in a container and allow programmers to traverse through the elements of a container. They provide a way to access and manipulate the elements of a container without exposing the underlying implementation details.
// 4. Functors: These are objects that act like functions and are used in algorithms to customize behavior.
#include <bits/stdc++.h>
using namespace std;

// Containers

// 1.Pair: A pair is a simple container that holds two values of any type. It is defined in the <utility> header and is used to store a pair of values together. The first value is accessed using the 'first' member, and the second value is accessed using the 'second' member.
void explainPair() {
    pair<int, int> p1; // A pair of an integer
    p1.first = 1; // Accessing the first element of the pair
    p1.second = 2; // Accessing the second element of the pair
    pair<int, int> p2(3, 4); // Initializing a pair with values
    pair<int, pair<int, int>> p3{3, {4, 7}}; // Initializing a pair with values, but the second element is a pair itself
    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} }; // An array of pairs

    cout << "Pair: (" << p1.first << ", " << p1.second << ")" << endl;
    cout << "Pair: (" << p2.first << ", " << p2.second << ")" << endl;
    cout << "Pair: (" << p3.first << ", (" << p3.second.first << ", " << p3.second.second << "))" << endl;
    cout << "Array of pairs: (" << arr[1].first << ", " << arr[1].second << ")" << endl;
}

// 2.Vector: A vector is a dynamic array that can resize itself automatically when elements are added or removed. It is defined in the <vector> header and provides a convenient way to store and manipulate a collection of elements. Vectors are implemented as contiguous memory blocks, which allows for efficient access and manipulation of elements.
void explainVector() {
    vector<int> v; // A vector of integers (empty vector container)

    v.push_back(1); // Adding an element to the end of the vector
    v.emplace_back(2); // Adding an element to the end of the vector (more efficient than push_back)

    vector<pair<int, int>> v2; // A vector of pairs
    v2.push_back({1, 2}); // Adding a pair to the vector
    v2.emplace_back(3, 4); // Adding a pair to the vector (more efficient than push_back) automatically constructs the pair

    vector<int> v3(5, 100); // A vector of integers with 5 elements, each initialized to 100
    vector<int> v4(5); // A vector of integers with 5 elements, each initialized to 0 (default value for int)
    vector<int> v5(v3); // A vector of integers initialized with another vector (copy constructor)

    vector<int>::iterator it = v.begin(); // An iterator pointing to the first element of the vector
    cout << "Vector: ";
    cout << *it << " "; // Accessing the first element of the vector using the iterator
    it++; // Moving the iterator to the next element
    cout << *it << endl; // Accessing the second element of the vector using the iterator

    vector<int>::iterator it2 = v.end(); // An iterator pointing to the position just after the last element of the vector
    vector<int>::reverse_iterator it3 = v.rbegin(); // An iterator pointing to the last element of the vector (reverse iterator)
    vector<int>::reverse_iterator it4 = v.rend(); // An iterator pointing to the position just before the first element of the vector (reverse iterator)

    cout << v[0] << " " << v.at(0) << endl; // Accessing the first element of the vector using the subscript operator and the at() method
    cout << v.back() << endl; // Accessing the last element of the vector using the back() method

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) { // Iterating through the vector using an iterator
        cout << *it << " "; // Accessing the current element of the vector using the iterator
    }
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++) { // Iterating through the vector using an auto iterator
        cout << *it << " "; // Accessing the current element of the vector using the auto iterator
    }
    cout << endl;

    for (auto it : v) { // Iterating through the vector using a range-based for loop
        cout << it << " "; // Accessing the current element of the vector using the range-based for loop
    }   

    // {10, 20, 30, 40, 50}
    v.erase(v.begin() + 1); // Removing the second element of the vector (20)
    v.erase(v.begin() + 1, v.begin() + 3); // Removing a range of elements from the vector (30 and 40)

    // Insert Functions

    vector<int> v6(2, 100); // A vector of integers initialized with a list of values
    v.insert(v6.begin(), 300); // Inserting an element at the beginning of the vector
    v.insert(v6.begin() + 1, 2, 10); // Inserting multiple elements at a specific position in the vector (inserting 2 elements with value 10 at index 1)

    vector<int> copy(2, 50); // A vector of integers initialized with a list of values
    v.insert(v6.begin(), copy.begin(), copy.end()); // Inserting a range of elements from another vector into the vector (inserting all elements from the copy vector at the beginning of the v6 vector)

    cout << v.size() << endl; // Getting the size of the vector

    v.pop_back(); // Removing the last element of the vector

    v.swap(v3); // Swapping the contents of two vectors (swapping the contents of v and v3)

    v.clear(); // Removing all elements from the vector (clearing the vector)
    cout << v.empty() << endl; // Checking if the vector is empty (returns true if the vector is empty, false otherwise)

}

// 3.List: A list is a doubly linked list that allows for efficient insertion and deletion of elements at any position. It is defined in the <list> header and provides a convenient way to store and manipulate a collection of elements. Lists are implemented as a sequence of nodes, where each node contains a value and pointers to the next and previous nodes in the list.
void explainList() {
    list<int> ls; // A list of integers (empty list container)

    ls.push_back(1); // Adding an element to the end of the list
    ls.emplace_back(2); // Adding an element to the end of the list (more efficient than push_back)

    ls.push_front(2); // Adding an element to the front of the list
    ls.emplace_front(3); // Adding an element to the front of the list (more efficient than push_front)

    // rest all functions same as vector
    // begin(), end(), rbegin(), rend(), at(), back(), erase(), insert(), size(), pop_back(), swap(), clear(), empty()
}

// 4.Deque: A deque (double-ended queue) is a data structure that allows for efficient insertion and deletion of elements at both the front and the back. It is defined in the <deque> header and provides a convenient way to store and manipulate a collection of elements. Deques are implemented as a sequence of blocks, where each block contains a fixed number of elements, and the blocks are linked together to form the deque.
void explainDeque() {
    deque<int> dq; // A deque of integers (empty deque container)

    dq.push_back(1); // Adding an element to the end of the deque
    dq.emplace_back(2); // Adding an element to the end of the deque (more efficient than push_back)

    dq.push_front(2); // Adding an element to the front of the deque
    dq.emplace_front(3); // Adding an element to the front of the deque (more efficient than push_front)

    dq.front(); // Accessing the first element of the deque using the front() method
    // rest all functions same as vector
    // begin(), end(), rbegin(), rend(), at(), back(), erase(), insert(), size(), pop_back(), swap(), clear(), empty()
}

// 5.Stack: A stack is a data structure that follows the Last In First Out (LIFO) principle, where the last element added to the stack is the first one to be removed. It is defined in the <stack> header and provides a convenient way to store and manipulate a collection of elements. Stacks are implemented as a sequence of elements, where new elements are added to the top of the stack and removed from the top of the stack.
void explainStack() {
    stack<int> st; // A stack of integers (empty stack container)

    st.push(1); // Adding an element to the top of the stack
    st.push(2); // Adding another element to the top of the stack
    st.push(3); // Adding another element to the top of the stack
    st.push(3); // Adding another element to the top of the stack
    st.emplace(5); // Adding an element to the top of the stack (more efficient than push)

    cout << st.top() << endl; // Accessing the top element of the stack using the top() method

    st.pop(); // Removing the top element of the stack

    cout << st.size() << endl; // Getting the size of the stack
    cout << st.empty() << endl; // Checking if the stack is empty (returns true if the stack is empty, false otherwise)

    stack<int> st1, st2;
    st1.swap(st2); // Swapping the contents of two stacks (swapping the contents of st1 and st2)

}

// 6.Queue: A queue is a data structure that follows the First In First Out (FIFO) principle, where the first element added to the queue is the first one to be removed. It is defined in the <queue> header and provides a convenient way to store and manipulate a collection of elements. Queues are implemented as a sequence of elements, where new elements are added to the back of the queue and removed from the front of the queue.
void explainQueue() {
    queue<int> q; // A queue of integers (empty queue container)

    q.push(1); // Adding an element to the back of the queue
    q.push(2); // Adding another element to the back of the queue
    q.emplace(4); // Adding an element to the back of the queue (more efficient than push)

    q.back() += 5; // Accessing the last element of the queue using the back() method
    cout << q.back() << endl; // Accessing the last element of the queue using the back() method    

    cout << q.front() << endl; // Accessing the first element of the queue using the front() method
    q.pop(); // Removing the first element of the queue

    cout << q.front() << endl; // Getting the size of the queue

    // size(), empty(), swap() functions same as stack
}

// 7. Priority Queue: A priority queue is a data structure that allows for efficient retrieval of the highest (or lowest) priority element. It is defined in the <queue> header and provides a convenient way to store and manipulate a collection of elements with associated priorities. Priority queues are implemented as a binary heap, where each element has a priority value, and the element with the highest (or lowest) priority is always at the front of the queue.
void explainPriorityQueue() {
    priority_queue<int> pq; // A priority queue of integers (empty priority queue container)

    pq.push(1); // Adding an element to the priority queue
    pq.push(5); // Adding another element to the priority queue
    pq.push(3); // Adding another element to the priority queue
    pq.emplace(4); // Adding an element to the priority queue (more efficient than push)

    cout << pq.top() << endl; // Accessing the highest priority element of the priority queue using the top() method

    pq.pop(); // Removing the highest priority element of the priority queue

    cout << pq.top() << endl; // Accessing the new highest priority element of the priority queue using the top() method

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> minHeap; // A priority queue of integers implemented as a minimum heap (empty minimum heap container)
    pq.push(1); // Adding an element to the minimum heap
    pq.push(5); // Adding another element to the minimum heap
    pq.push(3); // Adding another element to the minimum heap
    pq.emplace(4); // Adding an element to the minimum heap (more efficient than push

    cout << minHeap.top() << endl; // Accessing the lowest priority element of the minimum heap using the top() method
    // size(), empty(), swap() functions same as stack
}

// 8. Set: A set is a data structure that stores unique elements in a sorted order. It is defined in the <set> header and provides a convenient way to store and manipulate a collection of unique elements. Sets are implemented as a balanced binary search tree, where each element is stored in a node, and the nodes are arranged in a way that allows for efficient searching, insertion, and deletion of elements.
void explainSet() {
    set<int> s; // A set of integers (empty set container)

    s.insert(1); // Adding an element to the set
    s.insert(2); // Adding another element to the set
    s.emplace(3); // Adding an element to the set (more efficient than insert, but since 2 already exists in the set, it will not be added again)
    s.insert(5); // Adding another element to the set
    s.emplace(4); // Adding an element to the set (more efficient than insert)

    // Functionality of inserrt in vector can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), at(), back(), erase(), insert(), size(), swap(), clear(), empty() functions same as vector

    // {1, 2, 3, 4, 5}
    auto it = s.find(3); // Finding an element in the set using the find() method (returns an iterator to the element if found, or s.end() if not found)

    it = s.find(6); // Finding an element that does not exist in the set using the find() method (returns s.end() since 6 is not found in the set)

    s.erase(5); // Removing an element from the set using the erase() method (removes the element if it exists in the set, does nothing if it does not exist in the set)

    int count = s.count(1); // Counting the number of occurrences of an element in the set using the count() method (returns 1 if the element exists in the set, 0 if it does not exist in the set)

    it = s.find(3); // Finding an element in the set using the find() method (returns an iterator to the element if found, or s.end() if not found)
    s.erase(it); // Removing an element from the set using an iterator (removes the element pointed to by the iterator)

    auto it1 = s.find(2); // Finding an element in the set using the find() method (returns an iterator to the element if found, or s.end() if not found)
    auto it2 = s.find(4); // Finding another element in the set using the find() method (returns an iterator to the element if found, or s.end() if not found)
    s.erase(it1, it2); // Removing a range of elements from the set using iterators (removes all elements in the range [it1, it2), i.e., removes the element pointed to by it1 and all elements up to but not including the element pointed to by it2)

    // lower_bound() and upper_bound() functions can also be used in same way as vector

    auto it6 = s.lower_bound(2); // Finding the lower bound of an element in the set using the lower_bound() method (returns an iterator to the first element that is not less than the given element, or s.end() if no such element exists)
    auto it7 = s.upper_bound(3); // Finding the upper bound of an element in the set using the upper_bound() method (returns an iterator to the first element that is greater than the given element, or s.end() if no such element exists)

}

// 9. Multiset: A multiset is a data structure that stores multiple occurrences of elements in a sorted order. It is defined in the <set> header and provides a convenient way to store and manipulate a collection of elements that may have duplicates. Multisets are implemented as a balanced binary search tree, where each element is stored in a node, and the nodes are arranged in a way that allows for efficient searching, insertion, and deletion of elements.
void explainMultiset() {
    multiset<int> ms; // A multiset of integers (empty multiset container)
    ms.insert(1); // Adding an element to the multiset
    ms.insert(1); // Adding another element to the multiset
    ms.insert(1); // Adding another element to the multiset (duplicates are allowed in a multiset)
    ms.insert(1); // Adding another element to the multiset

    int count = ms.count(1); // Counting the number of occurrences of an element in the multiset using the count() method (returns the number of elements with the value 1 in the multiset)

    ms.erase(1); // Removing all occurrences of an element from the multiset using the erase() method (removes all elements with the value 1 from the multiset)

    // rest all functions same as set
}

// 10. Unoredered Set: An unordered set is a data structure that stores unique elements in an unordered manner. It is defined in the <unordered_set> header and provides a convenient way to store and manipulate a collection of unique elements without any specific order. Unordered sets are implemented as a hash table, where each element is stored in a bucket based on its hash value, and the buckets are linked together to form the unordered set.
void explainUnorderedSet() {
    unordered_set<int> us; // An unordered set of integers (empty unordered set container)
    // lower bound() and upper_bound() functions doesn't work in unordered set since it is not sorted
    // rest all functions same as set
    // it has better complexity than set in most cases, except some cases when collisions occur in the hash table, which can lead to worse performance than a set
}

// 11. Map: A map is a data structure that stores key-value pairs in a sorted order based on the keys. It is defined in the <map> header and provides a convenient way to store and manipulate a collection of key-value pairs. Maps are implemented as a balanced binary search tree, where each key-value pair is stored in a node, and the nodes are arranged in a way that allows for efficient searching, insertion, and deletion of elements based on the keys.
void explainMap() {
    map<int, int> m; // A map of integers to integers (empty map container)
    map<pair<int, int>, int> m1; // A map of pairs of integers to integers (empty map container)
    map<int, pair<int, int>> m2; // A map of integers to pairs of integers (empty map container)

    m[1] = 2; // Adding a key-value pair to the map using the subscript operator (adds the key 1 with the value 100 to the map)
    m.emplace(3, 1); // Adding a key-value pair to the map using the emplace() method (more efficient than using the subscript operator, adds the key 3 with the value 1 to the map)
    m.insert({2, 4}); // Adding a key-value pair to the map using the insert() method (adds the key 2 with the value 4 to the map)
    m1[{2, 3}] = 10;// Adding a key-value pair to the map using the subscript operator with a pair as the key (adds the key {4, 5} with the value 10 to the map)

    for(auto it : m) { // Iterating through the map using a range-based for loop (iterates through each key-value pair in the map)
        cout << "Key: " << it.first << ", Value: " << it.second << endl; // Accessing the key and value of the current key-value pair using the first and second members of the pair
    }

    cout << m[1] << endl; // Accessing the value associated with a key in the map using the subscript operator (returns the value associated with the key 1, which is 100)
    cout << m[5] << endl; // Accessing the value associated with a key that does not exist in the map using the subscript operator (returns 0 since the key 5 does not exist in the map, and the subscript operator adds the key 5 with the default value 0 to the map)

    auto it = m.find(3); // Finding a key in the map using the find() method (returns an iterator to the key-value pair if the key is found, or m.end() if the key is not found)}
    cout << it->second << endl; // Accessing the value associated with the found key using the second member of the pair pointed to by the iterator

}
int main() {
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainMultiset();
    explainUnorderedSet();
    explainMap();

    return 0;
}
