#include <string.h>
#include <stdio.h>
int main(){char *pos;
int N, banananananananananananananaananananananannaannaanannanaanananananananananananananaanananananana;char row[10000];
double V, weight, loss;scanf("%d\n", &N);weight = 0.0;
loss = 0.0;for(int i = 1; i <= N; ++i){scanf("%lf\n", &V);scanf("%[^\n]", &row);banananananananananananananaananananananannaannaanannanaanananananananananananananaanananananana = 1;
pos = strchr(row, ' ');
while(pos != NULL){banananananananananananananaananananananannaannaanannanaanananananananananananananaanananananana++;
pos = strchr(pos + 1, ' ');}printf("day %d: %d kg\n", i, banananananananananananananaananananananannaannaanannanaanananananananananananananaanananananana);
weight += banananananananananananananaananananananannaannaanannanaanananananananananananananaanananananana;
loss += V;}weight /= N; loss /= N;printf("%.2lf kg by day\nR$ %.2lf by day\n", weight, loss);return 0;}
