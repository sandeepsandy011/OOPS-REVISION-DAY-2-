#include <iostream>
 
using namespace std;
 
class Box {
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );
 
   private:
      double width;
};
 

double Box::getWidth(void) {
   return width ;
}
 
void Box::setWidth( double wid ) {
   width = wid;
}
 

int main() {
   Box box;
 
   
   cout << "Length of box : " << box.length <<endl;
 
 
   cout << "Width of box : " << box.getWidth() <<endl;
 
   return 0;
}
