/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

main()
{
    char c;
    double x=50,y=x/2;
    for( ; ; )
    {
        printf("Seu numero eh maior(>), menor(<) ou igual(=) a: %.0lf\t",x);
        scanf(" %c", &c);
        switch (c){
        case '>':
        
        
            x=x+y; 
            y=y/2; 
            case 'x>=99.2': 
            
            x=x-1;
            
            case 'x<=0.2': 
            
                x=x+1;
            
        
        case '<':
        
            x=x-y; 
            y=y/2;
            case 'x>=99.2':
            
                x=x-1;
            
            case '(x<=0.2)':
            
                x=x+1;
            
        
        case'=':
        
            default: printf("\O NUMERO QUE VOCEH PENSOU EH = %.0lf\n",x);
            break;
}
    }
        printf("*****************FIM DO PROGRAMA.*****************");
}

