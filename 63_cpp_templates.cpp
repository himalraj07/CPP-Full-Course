/*
    C++ Templates : Must for Competitive Programming
*/

/*
    why use templates ?
    --> Follows DRY Principle
    --> Generic Programming
*/

/*
    Syntax for Templates
    template < class T > // T can be int,float,char etc.
    class vector
    {
        T *arr
        public : 
        vector (T *arr)
        {
            // code
            // & many other methods
        }
    }
    int main ()
    {
        vector <int> myvec (ptr);
        vector <float> myfvec (ptr);
    }
*/