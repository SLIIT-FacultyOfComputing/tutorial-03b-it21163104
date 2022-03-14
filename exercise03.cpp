#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box

struct Box {
  int height;
  int width;
  int length;
};


int main() {
    // 2. Create a variable called box1 
    
    // 3. Create a variable called box2 
    
    struct Box box1,box2;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;
    
    // 5. 
    totalVolume = volume( box1.height,box1.width,box1.length )
             + volume( box1.height,box1.width,box1.length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement 
int volume (int h,int w,int l)
{
  return h * w * l;
}
