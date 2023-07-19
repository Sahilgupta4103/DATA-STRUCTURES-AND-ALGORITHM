// /******************************************************************************

// Welcome to GDB Online.
// GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
// C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
// Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
// #include <bits/stdc++.h>
// using namespace std;

// int p(int pages[], int n, int c){
    
//     vector<int> v;
    
//     int count=0;
    
//     for(int i=0;i<n-1;i++){
//          //find
//         auto it = find(v.begin(),v.end(),pages[i]);
//         // if not present
//         if(it==v.end()){
//             //if memory is full
//             if(v.size()==c){
//                 // remove the first element as it is LRU
//                 v.erase(v.begin());
//             }
//             v.push_back(pages[i]);
//             count++;
//         }
        
//         else{
//             v.erase(it);
//             v.push_back(pages[i]);
//         }
//     }
//     return count;
// }

// int main()
// {
//     int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
//     int n = sizeof pages/ sizeof pages[0];
//     int capacity=4;
//     int z = p(pages,n,capacity);
//     return z;
// }
#include <bits/stdc++.h>
using namespace std;
 
/* Counts no. of page faults */
int pageFaults(int n, int c, int pages[])
{
    // Initialise count to 0
    int count = 0;
 
    // To store elements in memory of size c
    vector<int> v;
    int i;
    for (i = 0; i <= n - 1; i++) {
 
        // Find if element is present in memory or not
        auto it = find(v.begin(), v.end(), pages[i]);
 
        // If element is not present
        if (it == v.end()) {
 
            // If memory is full
            if (v.size() == c) {
               
                // Remove the first element
                // As it is least recently used
                v.erase(v.begin());
            }
 
            // Add the recent element into memory
            v.push_back(pages[i]);
 
            // Increment the count
            count++;
        }
        else {
 
            // If element is present
            // Remove the element
            // And add it at the end as it is
            // the most recent element
            v.erase(it);
            v.push_back(pages[i]);
        }
    }
 
    // Return total page faults
    return count;
}
 
/* Driver program to test pageFaults function*/
int main()
{
 
    int pages[] = { 1, 2, 1, 4, 2, 3, 5 };
    int n = 7, c = 3;
 
    cout << "Page Faults = " << pageFaults(n, c, pages);
    return 0;
}