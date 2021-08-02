// https://binarysearch.com/problems/Check-if-Number-Is-Perfect-Square

bool solve(int n) {
    if(ceil(sqrt(n))==floor(sqrt(n)))
    return true;
    return false;
}

