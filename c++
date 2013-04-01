#include <iostream>

int main(int argc, const char * argv[])
{
    using namespace std;
    
    int a=0,b=0,c=0;
    
    printf("entrez le valeur a");
    scanf("%d",&a);
    
    
    printf("entrez la valeur b");
    scanf("%d",&b);
    
    
    
    printf("entrez la valeur c");
    scanf("%d",&c);
    
    if ( (a>b && c<3) || (a-b>c))
    
    {
        a=b-1;
        
        
        
        while (a>0) {
            
            
            a=a-1;
            b=a-1;
            
            
        }
        c=c+2;
    
    }else{
        
        
        a=b-c;
        
        
        
        
    }
    printf("a=%d,b=%d,c=%d",a,b,c);
    
    return 0;
}

