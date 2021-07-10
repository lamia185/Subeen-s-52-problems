#include <stdio.h>

int main()
{
    int i, a, b, c, T, min, max, mid;
    
    scanf("%d\n", &T);
    
    for(i=0; i<T; ++i)
    {
        scanf("%d %d %d\n", &a, &b, &c);
        if (a > b)
        {
            max = a;
            min = b;
            if (c > a) {
                max = c;
                mid = a;
            }
            else 
            {
                if (c > b)
                {
                    mid = c;
                }
                else 
                {
                    mid = b;
                    min = c;
                }    
            }
        }
        
        else
        {
            max = b;
            min = a;
            if (c > b)
            {
                max = c;
                mid = b;
            }
            else
            {
                if(c > a)
                {
                    mid = c;
                }
                else
                {
                    min = c;
                    mid = a;
                }      
            }
        }
      
        printf("Case %d: %d %d %d\n", i+1, min, mid ,max);    
    }
    
    return 0;
}
