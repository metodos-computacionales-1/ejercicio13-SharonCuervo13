#include <iostream>


int getMax(int x1, int y1){
    if (x1>y1){
        return x1;
    }
    else{
        return y1;
    }
}

double getMax(double x2, double y2){
    if (x2>y2){
        return x2;
    }
    else{
        return y2;
    }
}

int main(void){
    int x1=43;
    int y1=40;
    std::cout<<"El valor máximo de los enteros es:"<<getMax(x1,y1)<<std::endl;
    double x2=43.1;
    double y2=40.5;
    std::cout<<"El valor máximo de los double es:"<<getMax(x2,y2)<<std::endl;
    return 0;
}
//La diferencia es que cuando usamos double se tienen en cuenta los decimales. 
    
    
    