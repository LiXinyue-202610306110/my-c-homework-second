//李鑫玥
//202610306110
#include <stdio.h>
#include <stdlib.h>
struct Sensor{
int temp;
int humi;
int valid;
};
struct Sensor pack_sensor(int t,int h){
    struct Sensor s;
    s.temp=t;
    s.humi=h;
    if(t>=-20&&t<=50&&h>=0&&h<=100){
        
        s.valid=1;
    }
    else{
        s.valid=0;
    }
return s;
}
int main() {
    system("chcp 65001 >nul");
    int t,h;
scanf("%d %d",&t,&h);
struct Sensor r = pack_sensor(t,h);
if(r.valid==1){
    printf("TEMP=%d HUMI=%d\n",r.temp,r.humi);
}
else{
     printf("ERROR: Out of range\n");
}
    return 0;
}