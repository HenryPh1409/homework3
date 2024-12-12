Henry-1123561:
Question 1 : I change the input to  V= 6 edge= {{0, 1}, {0, 4}, {4, 1}, {4, 3}, {1, 3}, {1, 2}, {3, 2}, {5,3}, {5,4},{5,2}};
the output is 

( 0: 1 4 )
( 1: 0 4 3 2 )
( 2: 1 3 5 )
( 3: 4 1 2 5 )
( 4: 0 1 3 5 )
( 5: 3 4 2 )


Question 2: I change the input to 
        {1, 4},       // Node 0 is connected to nodes 1 and 4
        {0, 2, 3},    // Node 1 is connected to nodes 0, 2, and 3
        {1, 3},       // Node 2 is connected to nodes 1 and 3
        {1, 2, 4},    // Node 3 is connected to nodes 1, 2, and 4
        {0, 3}        // Node 4 is connected to nodes 0 and 3
Output: 0 1 4 2 3


Question 3 : I change the input to
        {1, 3},       // Node 0 is connected to nodes 1 and 3
        {0, 2},       // Node 1 is connected to nodes 0 and 2
        {1, 4},       // Node 2 is connected to nodes 1 and 4
        {0, 4},       // Node 3 is connected to nodes 0 and 4
        {2, 3}        // Node 4 is connected to nodes 2 and 3
Output: 0 1 2 4 3

Question 4: I change the input to
        {0, 1, 3},
        {0, 2, 6},
        {0, 3, 4},
        {1, 3, 5},
        {2, 3, 4}
Output: 
11 ( 1 to 0 : 3 then 0 to 3 : 4 and 3 to 2 : 4, we have 3 + 4 + 4 = 11 )
