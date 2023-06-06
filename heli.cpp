#include <iostream>
 using namespace std;
 
 int main(){
     int h, p, i, j;
     cin >> h >> p >> i >> j;
     while(i != p && i != h){
         if(j == -1){
             while(i != h && i != p){
                 i--;
                 if(i == -1){
                     i = 15;}
             }
             if(i == h){
                 printf("S");}
         }
         if(j == 1){
             while(i != h && i != p){
                 i++;
                 if(i == 16){i = 0;}
             }
             if(i == h){printf("S");}
         }
 
     }
     if(i == p) {printf("N");}
     return 0;
 }

}
