/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    unsigned int search (unsigned int low, unsigned int high){
        if (low == high){return low;}
        unsigned int mid = (low + high)/2;
        switch (guess(mid)){
            case 0:
                return mid;
            case -1:
                //mid is higher than pick
                //we now search from low to mid
                return search(low, mid);
            case 1:
                //mid is lower than pick
                //we now search from mid to high
                return search(mid+1, high);
        }
        return 0;
    }

    unsigned int guessNumber(unsigned int n) {
        /*
        Approach:
        find midpoint
        call search on appropriate half
        do it again
        */
        return search(1, n);
    }
};