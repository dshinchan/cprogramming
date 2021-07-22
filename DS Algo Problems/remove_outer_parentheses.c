//remove outer parentheses//

char * removeOuterParentheses(char * S){
    int a=0,b;int count=0;
    for(a=0,b=0;*(a+S)!='\0';a++)
 {     if(*(a+S)==')')
       {
            count--;
            if(count>0)
            {
                *(b+S)=')';
                    b++;
            }
        }else{
                count++;
                if(count>1)
                {
                    *(b+S)='(';
                    b++;
                }            
            }
 }
    *(b+S)='\0';
    return S;
}
