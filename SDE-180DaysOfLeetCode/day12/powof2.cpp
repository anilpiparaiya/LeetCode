bool isPowerOfTwo (int x) 
{ 
    if(x==0)
    return false;
    else
    return x&(x-1);
}
