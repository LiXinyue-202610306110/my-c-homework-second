//李鑫玥
//202610306110
#include <stdio.h>
#include <stdlib.h>
struct Window{
    int buffer[3];
    int count;
};
struct Window push_data(struct Window win,int val){
win.buffer[win.count%3]=val;
win.count=win.count+1;
return win;
}
int get_average(struct Window win){
int sum=0;
for(int i=0;i<win.count;i++){
    sum+=win.buffer[i];

}
if(win.count<3){
return sum/win.count; 
}
else{
    sum=win.buffer[0]+win.buffer[1]+win.buffer[2];
return sum/3;
}
}
int main() {
    system("chcp 65001 >nul");
    int n;
scanf("%d",&n);
struct Window win ={.buffer={0,0,0},.count=0};
for(int i=0;i<n;i++){
    int val;
    scanf("%d",&val);
win=push_data(win,val);
int a;
a=get_average(win);
printf("%d",a);
printf(" ");
}
    return 0;
}