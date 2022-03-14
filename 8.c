int main()
{

   int i,j,n,m;
   int sum;
   sum = 0;

   for (i=0; i<10; i++){
       for(j=0; j<10; j++){
                for (n=0; n<10; n++){
                    for(m=0; m<10; m++){
                             if( m == 8 ){sum = sum+1;}
                             if( n == 8){sum = sum+1;}
                             if ( j == 8){sum = sum+1;}
                             if( i == 8 ){sum = sum+1;}
                    }
              }
       }


   }
   printf("total count 8 :  %d \n",sum);
}