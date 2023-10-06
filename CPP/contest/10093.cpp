 #include <stdio.h>
 #include <string.h>
 
 int realValue(char i){
     if(i >= '0' && i <= '9'){ return (i - '0');}
     if(i >= 'A' && i <= 'Z'){ return (i - 'A' + 10);}
     if(i >= 'a' && i <= 'z'){ return (i - 'a' + 36);}
 }
 
 int main(){
     char R[63];
     while(scanf("%s", R) == 1){
         int answ = 0, N = 0, size = strlen(R);
         if((size == 1 && R[0] == '0')|| (size == 2 && (R[0] == '-'|| R[0] == '+') && R[1] == '0')){printf("2\n"); continue ;} //casos unicos
         int sum = 0;
         for(int i = 0; i < size; i++){
             if(R[i] == '-' || R[i] == '+') continue; //caso de espaços ou um numero positivo
             int num = realValue(R[i]);
             sum += num;
             if(num > N) N = num;
             }
         for(int j = N; j <= 61 && !answ; j++){if(sum % j == 0) answ = j+1;}
             if(answ) printf("%d\n", answ);
             else{ printf("such number is impossible\n");}
     }
     return 0;
 }

