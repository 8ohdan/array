#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int initialSize;    
    int step;          
    int* array;        
    int currentIndex;  
    int arraySize;     

public:
    Array(int size, int step);   
    Array();                    
    ~Array();                  

    void showElements() const;   
    void expandArray(int size);  
    int getSize() const;         
    int getElemSize() const;     
    void setValue(int val);     
    void setArray(int* pArr, int size);  
};

#endif 

